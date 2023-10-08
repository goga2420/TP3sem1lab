//
//  Stationery.hpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/8/23.
//

#ifndef Stationery_hpp
#define Stationery_hpp

#include <stdio.h>
class Stationery : protected BookShop{
public:
    string type;
    string color;
    string purpose;
    float price;

    Stationery(string type, string color, string purpose, float price);
};
#endif /* Stationery_hpp */
