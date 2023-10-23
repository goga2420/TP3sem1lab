//
//  Stationery.cpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/8/23.
//

#include "Stationery.hpp"

#include <iostream>

#include <string>
Stationery::Stationery()
{
    type = "";
    color = "";
    purpose = "";
    price = 0;
}

void Stationery::ClearVirtual() {
    std::cin >> *this;
}

Stationery::Stationery(string type, string color, string purpose, float price){
    this->type = type;
    this->color = color;
    this->purpose = purpose;
    this->price = price;
}

Stationery::Stationery(Stationery& copy)
{
    *this = copy;
}

Stationery::~Stationery()
{

}

Stationery& Stationery::operator=(Stationery& copy)
{
    this->type = copy.type;
    this->color = copy.color;
    this->purpose = copy.purpose;
    this->price = copy.price;
    return *this;
}

std::istream& operator>>(std::istream& in, Stationery& templat)
{
    setlocale(LC_ALL, "russian");
    std::cout << "Enter stationary info\n";
    std::cout << "Type: ";
    getchar();
    std::getline(std::cin, templat.type);
    std::cout << "Color: ";
    std::getline(std::cin, templat.color);
    std::cout << "Purpose: ";
    std::getline(std::cin, templat.purpose);
    
    int price;
    std::cout << "Price: ";
    cin>>price;
    if(price > 0)
    {
        templat.price = price;
        getchar();
    }
    else{
        cout<<"Out of range value";
        cin.clear();
    }
    
    return in;
}

std::ostream& operator<<(std::ostream& out, Stationery& templat)
{
    
    out << "Type: " << templat.type << std::endl;
    out << "Color: " << templat.color << std::endl;
    out << "Purpose: " << templat.purpose << std::endl;
    out << "Price: " << templat.price << std::endl;
    return out;
}

std::ofstream& operator<<(std::ofstream& fout, Stationery& templat)
{
    fout << templat.type << std::endl;
    fout << templat.color << std::endl;
    fout << templat.purpose << std::endl;
    fout << templat.price << std::endl;
    return fout;
}
std::ifstream& operator>> (std::ifstream& fin, Stationery& templat)
{
    fin >> templat.type >> templat.color >> templat.purpose >> templat.price;
    return fin;
}

