//
//  Book1.cpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/8/23.
//

#include "Book1.hpp"


Book ::Book(char title[20], char author[20], int year, char annotation[50], char genre[20], int pages, float price) {
    *this->title = *title;
    *this->author = *author;
    this->year = year;
    *this->annotation = *annotation;
    *this->genre = *genre;
    this->pages = pages;
    this->price = price;
}
