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

Book ::Book(Book& copy) {
    *this = copy;
    
}

Book::~Book()
{

}

void Book::ClearVirtual() {
    std::cin >> *this;
}

Book& Book :: operator=(Book& copy)
{
    this->title = copy.title;
    this->author = copy.author;
    this->year = copy.year;
    this->annotation = copy.annotation;
    this->genre = copy.genre;
    this->pages = copy.pages;
    this->price = copy.price;
    return *this;
}

std::istream& operator>> (std::istream& in, Book& templat)
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
    
    cout<<"Annotation: ";
    getline(cin, templat.annotation);
    
    cout<<"Genre: ";
    getline(cin, templat.genre);
    
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

std::ostream& operator<<(std::ostream& out, Book& templat)
{
    
    out << "Title: " << templat.title << endl;
    out << "Author: " << templat.author << endl;
    out << "Year: " << templat.year << endl;
    out << "Annotation: " << templat.annotation << endl;
    out << "Genre: " << templat.genre << endl;
    out << "Pages: " << templat.pages << endl;
    out << "Price: " << templat.price << endl;
    return out;
}

ofstream& operator<<(ofstream& fout, Book& templat)
{
//    fout << templat.title << endl;
//    fout << templat.author << endl;
//    fout << templat.year << endl;
//    fout << templat.annotation << endl;
//    fout << templat.genre << endl;
//    fout << templat.pages << endl;
//    fout << templat.price << endl;
    return fout;
}
ifstream& operator>> (ifstream& fin, Book& templat)
{
    
    //fin>> templat.title>>templat.author>>templat.year>>templat.annotation>>templat.genre>>templat.pages>>templat.price;
    
    return fin;
}
