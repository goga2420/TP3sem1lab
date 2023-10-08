//
//  TextBook.cpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/8/23.
//

#include "TextBook.hpp"

TextBook::TextBook(string title, string author, int year, string edu_est, int studyYear, int pages, float cost) {
    this->title = title;
    this->author = author;
    this->year = year;
    this->edu_est = edu_est;
    this->studyYear = studyYear;
    this->pages = pages;
    this->cost = cost;
}
