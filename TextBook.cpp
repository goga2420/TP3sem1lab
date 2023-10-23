//
//  Book1.cpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/8/23.
//

#include "TextBook.hpp"


TextBook::TextBook(){
    title = "";
    author = "";
    year = 0;
    edu_est = "";
    study_year = 0;
    pages = 0;
    price = 0;
    
}

TextBook::TextBook(string title, string author, int year, string edu_est, int study_year, int pages, float price){
    this->title = title;
    this->author = author;
    this->year = year;
    this->edu_est = edu_est;
    this->study_year = study_year;
    this->pages = pages;
    this->price = price;
}

TextBook ::TextBook(TextBook& copy) {
    *this = copy;
    
}

TextBook::~TextBook()
{

}
void TextBook::ClearVirtual() {
    std::cin >> *this;
}

TextBook& TextBook :: operator=(TextBook& copy)
{
    this->title = copy.title;
    this->author = copy.author;
    this->year = copy.year;
    this->edu_est = copy.edu_est;
    this->pages = copy.pages;
    this->price = copy.price;
    return *this;
}

std::istream& operator>> (std::istream& in, TextBook& templat)
{
    cout<<"Enter book info\n";
    cout<<"Title: ";
    getchar();
    getline(cin, templat.title);
    
    cout<<"Author: ";
    getline(cin, templat.author);
    
    cout<<"Year: ";
    int year;
    cin>>year;
    if(year > 0)
    {
        templat.year = year;
        getchar();
    }
    else{
        cout<<"Out of range value";
        cin.clear();
    }
    
    cout<<"Educational establishment: ";
    getline(cin, templat.edu_est);
    
    
    cout<<"Pages: ";
    int pages;
    cin>>pages;
    if(year > 0)
    {
        templat.pages = pages;
        getchar();
    }
    else{
        cout<<"Out of range value";
        cin.clear();
    }
    
    cout<<"Price: ";
    int price;
    cin>>price;
    if(year > 0)
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

std::ostream& operator<<(std::ostream& out, TextBook& templat)
{
    
    out << "Title: " << templat.title << endl;
    out << "Author: " << templat.author << endl;
    out << "Year: " << templat.year << endl;
    out << "Educational establishent: " << templat.edu_est << endl;
    out << "Pages: " << templat.pages << endl;
    out << "Price: " << templat.price << endl;
    return out;
}

std::ofstream& operator<<(std::ofstream& fout, TextBook& templat)
{
    fout << templat.title << endl;
    fout << templat.author << endl;
    fout << templat.year << endl;
    fout << templat.edu_est << endl;
    fout << templat.pages << endl;
    fout << templat.price << endl;
    return fout;
}
std::ifstream& operator>> (std::ifstream& fin, TextBook& templat)
{
    
    fin>> templat.title>>templat.author>>templat.year>>templat.edu_est>>templat.pages>>templat.price;
    
    return fin;
}

