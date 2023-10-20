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
    
    Book();
    Book(string title, string author, int year, string annotation, string genre, int pages, float price);
  
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

#endif /* Book1_hpp */
