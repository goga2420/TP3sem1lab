//
//  Keeper.hpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/20/23.
//

#ifndef Keeper_hpp
#define Keeper_hpp

#include <iostream>
#include <fstream>
#include <string>
#include <exception>
template <class T>
class Keeper
{
public:
    Keeper();
    ~Keeper();
    Keeper(T& obj);
    void Set();//äîáàâëåíèå îáúåêòà
    void Pop();//óäàëåíèå îáúåêòà
    void Get();//âûâîä íà ýêðàí
    void Edit(const int& change);//ðåäàêòèðîâàíèå îáúåêòà
    void ToFile(std::string& file);//çàïèñü â ôàéë
    void FromFile(std::string& file);//÷òåíèå èç ôàéëà

private:
    T* object;
    int size;
};

template <class T>
Keeper<T>::Keeper()
{
    object = NULL;
    size = 0;
}

template <class T>
Keeper<T>::~Keeper()
{
    delete[]object;
}
template <class T>
Keeper<T>::Keeper(T& obj)
{
    object = obj;
}
template <class T>
void Keeper<T>::Set()
{
    T* temp = new T[size + 1];
    for (int i = 0; i < size; ++i)
        temp[i] = object[i];
    delete[] object;
    object = temp;
    std::cin >> object[size];
    ++size;
    std::cout << "\nAdd new object\n";
}
template <class T>
void Keeper<T>::Pop()
{
    try
    {
        if (size == 0) {
            //std::exception empty("Object is empty");
            throw std::exception();
        }
        int num;
        std::cout << "Chose which element to delete: ";
        std::cin >> num;
        if (num < 0 || num >= size)
        {
            //std::exception wrong("Wrong value");
            throw std::exception();
        }

        T* temp = new T[size - 1];
        for (int i = 0, j = 0; i < num && size>1 && j < size - 1; ++i, ++j)
            temp[j] = object[i];
        for (int i = num + 1, j = num; i < size && size>1 && j < size - 1; ++i)
            temp[j] = object[i];
        delete[] object;
        object = temp;
        --size;
        std::cout << "\nObject deleted\n";
    }
    catch (std::exception& error)
    {
        std::cout << error.what() << std::endl;
    }
}
template<class T>
void Keeper<T>::Get()
{
    try
    {
        if (size == 0)
        {
            //std::exception empty("Object is empty");
            throw std::exception();
        }
        for (int i = 0; i < size; ++i)
            std::cout << object[i] << std::endl;
    }
    catch (std::exception& error)
    {
        std::cout << error.what() << std::endl;
    }
}

template<class T>
void Keeper<T>::Edit(const int& change)
{
    try {
        if (size == 0) {
            //std::exception empty("Object is empty");
            throw std::exception();
        }
        if (change < 0 || change >= size) {
            //std::exception wrong("Wrong value");
            throw std::exception();
        }
        std::cin >> object[change];
    }
    catch (std::exception& error) {
        std::cout << error.what() << std::endl;
    }
}

template<class T>
void Keeper<T>::ToFile(std::string& file)
{
    std::ofstream fout(file, std::ios::out);
    try {
        if (size == 0) {
            //std::exception empty("Object is empty");
            throw std::exception();
        }
        fout << size << std::endl;
        for (int i = 0; i < size; ++i)
        {
            fout << object[i];
        }
        fout.close();
        std::cout << "Recording successful" << std::endl;
    }
    catch (std::exception& error) {
        std::cout << error.what() << std::endl;
        fout.close();
    }
}
template<class T>
void Keeper<T>::FromFile(std::string& file)
{
    std::ifstream fin(file, std::ios::in);
    try {
        if (!fin.is_open()) {
            //std::exception error("File didn't open");
            throw std::exception();
        }
        if (fin.peek() == EOF) {
            //std::exception empty("File is empty");
            throw std::exception();
        }
        delete[] object;
        fin >> size;
        object = new T[size];
        for (int i = 0; i < size; ++i)
        {
            fin >> object[i];
        }
        fin.close();
        std::cout << "Reading successful" << std::endl;
    }
    catch (std::exception& error)
    {
        std::cout << error.what() << std::endl;
        fin.close();
    }
}


#endif /* Keeper_hpp */
