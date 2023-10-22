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
    void InFile(std::string& file);//çàïèñü â ôàéë
    void FromFile(std::string& file);//÷òåíèå èç ôàéëà

private:
    T* object;
    int size;
};

#endif /* Keeper_hpp */
