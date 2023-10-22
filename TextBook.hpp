//
//  TextBook.hpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/8/23.
//

#ifndef TextBook_hpp
#define TextBook_hpp

#include <stdio.h>
#include "BookShop.hpp"

class TextBook : protected BookShop{
public:
    
    TextBook();
    TextBook(TextBook& copy);
    ~TextBook();
    void ClearVirtual() override;
    friend std::ostream& operator<< (std::ostream& out, TextBook& templat);
    friend std::istream& operator>> (std::istream& in,  TextBook& templat);
    TextBook& operator =(TextBook& copy);
    friend std::ofstream& operator<< (std::ofstream& fout, TextBook& templat);
    friend std::ifstream& operator>> (std::ifstream& fin, TextBook& templat);
    
private:
    string title;
    string author;
    int year;
    string edu_est;
    int study_year;
    int pages;
    float price;

};
#endif /* TextBook_hpp */
