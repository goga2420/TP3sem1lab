//
//  Book1.hpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/8/23.
//


#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include "BookShop.hpp"
#include <iostream>

class Book : protected BookShop{
public:
    
    Book();
    Book(Book& copy);
    ~Book();
    void ClearVirtual() override;
    friend ostream& operator<< (ostream& out, Book& templat);
    friend istream& operator>> (istream& in,  Book& templat);
    Book& operator =(Book& copy);
    friend ofstream& operator<< (ofstream& fout, Book& templat);
    friend ifstream& operator>> (ifstream& fin, Book& templat);
  
private:
    string title;
    string author;
    int year;
    string annotation;
    string genre;
    int pages;
    float price;
    
};
#endif /* Book_hpp */


