//
//  Stationery.hpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/8/23.
//

#ifndef Stationery_hpp
#define Stationery_hpp

#include <stdio.h>
#include "BookShop.hpp"

class Stationery : protected BookShop{
public:
   
    Stationery();
    Stationery(string type, string color, string purpose, float price);
    Stationery(Stationery& copy);
    ~Stationery();
    void ClearVirtual() override;
    friend std::ostream& operator<< (std::ostream& out, Stationery& templat);
    friend std::istream& operator>> (std::istream& in, Stationery& templat);
    Stationery& operator =(Stationery& copy);
    friend std::ofstream& operator<< (std::ofstream& fout, Stationery& templat);
    friend std::ifstream& operator>> (std::ifstream& fin, Stationery& templat);
private:
    string type;
    string color;
    string purpose;
    float price;
};
#endif /* Stationery_hpp */
