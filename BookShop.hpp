//
//  BookShop.hpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/8/23.
//


#ifndef BookShop_hpp
#define BookShop_hpp

#include "Keeper.hpp"
#include <string>
#include <iostream>
using namespace std;


class BookShop{
public:
public:
    BookShop();
    virtual ~BookShop();
    virtual void ClearVirtual() = 0;
    
private:
    
};
#endif /* BookShop_hpp */


