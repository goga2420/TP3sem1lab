//
//  main.cpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/8/23.
//

#include <iostream>
#include "Book1.hpp"
#include "TextBook.hpp"
#include "Stationery.hpp"
#include "executer.cpp"
#include "Keeper.hpp"

using namespace std;

int main() {
    
    Keeper<Book> book;
    Keeper<TextBook> textbook;
    Keeper<Stationery> stationery;
    
    cout<<"Options to do in bookshop"<<endl;
    cout<<"1 - Book section "<<endl;
    cout<<"2 - TextBook section"<<endl;
    cout<<"3 - Stationery section"<<endl;
    
    int answer;
    cin >> answer;
    
    while(answer != 0)
    {
        system("cls");
        switch (answer) {
            case 1:
                Execute(book, "/Users/georgijzukov/Desktop/ГУАП/ТП/TP3sem1lab/Book.txt");
                
                cout<<"Options to do in bookshop"<<endl;
                cout<<"1 - Book section "<<endl;
                cout<<"2 - TextBook section"<<endl;
                cout<<"3 - Stationery section"<<endl;
                cin >> answer;
                break;
                
            case 2:
                Execute(textbook, "/Users/georgijzukov/Desktop/ГУАП/ТП/TP3sem1lab/TextBook.txt");
                
                cout<<"Options to do in bookshop"<<endl;
                cout<<"1 - Book section "<<endl;
                cout<<"2 - TextBook section"<<endl;
                cout<<"3 - Stationery section"<<endl;
                cin >> answer;
                break;
                
            case 3:
                Execute(stationery, "/Users/georgijzukov/Desktop/ГУАП/ТП/TP3sem1lab/Stationery.txt");
                
                cout<<"Options to do in bookshop"<<endl;
                cout<<"1 - Book section "<<endl;
                cout<<"2 - TextBook section"<<endl;
                cout<<"3 - Stationery section"<<endl;
                cin >> answer;
                break;
                
            case 0:
                cout << "Work is over\n";
                break;
                
            default:
                break;
        }
    }
    return 0;
}
