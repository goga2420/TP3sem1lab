//
//  TextBook.hpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/8/23.
//

#ifndef TextBook_hpp
#define TextBook_hpp

#include <stdio.h>
class TextBook : protected BookShop{
public:
    string title;
    string author;
    int year;
    string edu_est;
    int studyYear;
    int pages;
    float cost;

    TextBook(string title, string author, int year, string edu_est, int studyYear, int pages, float cost);
    ~TextBook();
};
#endif /* TextBook_hpp */
