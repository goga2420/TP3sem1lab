//
//  Book1.hpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/8/23.
//

#ifndef Book1_hpp
#define Book1_hpp

#include <stdio.h>


//
//  Book.hpp
//  ТП3курс1
//
//  Created by GeorgeZh on 10/8/23.
//

#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include "BookShop.hpp"

class Book : protected BookShop{
public:
    char title[20];
    char author[20];
    int year;
    char annotation[50];
    char genre[20];
    int pages;
    float price;

    Book(char title[20], char author[20], int year, char annotation[50], char genre[20], int pages, float price);
    //ghbdtndkjd
};
#endif /* Book_hpp */

#endif /* Book1_hpp */
