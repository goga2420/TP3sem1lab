//
//  Keeper.cpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/20/23.
//

#include "Keeper.hpp"

template<class T>
Keeper<T>::Keeper() { // Êîíñòðóêòîð
//    cout << "Âûçîâ êîíñòðóêòîðà ïî óìîë÷àíèþ (Õðàíèòåëü)" << endl << endl;
    ptr = nullptr;
    size = 0;
}
template<class T>
Keeper<T>::~Keeper() { // Äåñòðóêòîð
//    cout << "Âûçîâ äåñòðóêòîðà (Õðàíèòåëü)" << endl << endl;
    delete[] ptr;
}
template<class T>
void Keeper<T>::push() { // Ôóíêöèÿ äîáàâëåíèÿ íîâîãî îáúåêòà
    T* tmp = new T[size + 1];
    for (int i = 0; i < size; ++i) {
        tmp[i] = ptr[i];
    }
    delete[] ptr;
    ptr = tmp;
    cin >> ptr[size];
    ++size;
    cout << endl << endl << "" << endl << endl;
}
template<class T>
void Keeper<T>::pop(int num) { // Ôóíêöèÿ óäàëåíèÿ îáúåêòà
    try {
        if (size == 0) {
//            exception error("Пусто");
//            throw error;
            cout<<"Empty"<<endl;
        }
        if (num < 0 || num >= size) {
//            exception bug("");
//            throw bug;
            cout<<"Out of range value"<<endl;
        }
        T* tmp = new T[size - 1];
        ptr[num] = ptr[size - 1];
        for (int i = 0; i < size - 1; ++i) {
            tmp[i] = ptr[i];
        }
        delete[] ptr;
        ptr = tmp;
        --size;
        cout << endl << endl << "" << endl << endl;
    }
    catch (exception& error) {
        cout << error.what() << endl << endl;
    }
}
template<class T>
void Keeper<T>::display() { // Ôóíêöèÿ âûâîäà îáúåêòà íà ýêðàí
    if (size == 0) {
        cout << "Пусто" << endl << endl;
    }
    else {
        for (int i = 0; i < size; ++i) {
            cout << ptr[i] << endl;
        }
    }
}
