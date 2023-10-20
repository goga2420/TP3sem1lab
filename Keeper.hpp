//
//  Keeper.hpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/20/23.
//

#ifndef Keeper_hpp
#define Keeper_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <exception>
using namespace std;

template <class T>
class Keeper {
    T* ptr;
    int size;
public:
    Keeper();
    ~Keeper();
    void push(); // Ôóíêöèÿ äîáàâëåíèÿ íîâîãî îáúåêòà
    void pop(int); // Ôóíêöèÿ óäàëåíèÿ îáúåêòà
    void write(string); // Ôóíêöèÿ çàïèñè îáúåêòà â ôàéë
    void read(string); // Ôóíêöèÿ ñ÷èòûâàíèÿ îáúåêòà èç ôàéëà
    void display(); // Ôóíêöèÿ âûâîäà îáúåêòà íà ýêðàí
    void edit(int); // Ôóíêöèÿ ðåäàêòèðîâàíèÿ îáúåêòà
};
#endif /* Keeper_hpp */
