//
//  Book1.cpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/8/23.
//

#include "Book1.hpp"

Book::Book(){
    title = "";
    author = "";
    year = 0;
    annotation = "";
    genre = "";
    pages = 0;
    price = 0;
    
}

Book ::Book(string title, string author, int year, string annotation, string genre, int pages, float price) {
    this->title = title;
    this->author = author;
    this->year = year;
    this->annotation = annotation;
    this->genre = genre;
    this->pages = pages;
    this->price = price;
}
