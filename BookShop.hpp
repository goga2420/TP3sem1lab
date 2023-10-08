//
//  BookShop.hpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/8/23.
//


#ifndef BookShop_hpp
#define BookShop_hpp

#include <stdio.h>
#include <string>
using namespace std;


class BookShop{
public:
    BookShop();
    explicit BookShop(const BookShop& Ref, int E = 5);
    explicit BookShop(int num);
    ~BookShop();
    void set();
    void get();
    bool is_empty();
    void add(int num);
    void show();
    int pop(int num);
    BookShop& operator -= (int num); //для извлечения элемента
    
private:
    
};
#endif /* BookShop_hpp */


