//
//  main.cpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/8/23.
//

#include <iostream>
#include "Book1.hpp"
#include "Keeper.hpp"

using namespace std;

int main() {
    
    Book book;
    
    cout<<"Что будем делать?"<<endl;
    cout<<"1 - Добавить книгу"<<endl;
    cout<<"2 - Изменить книгу"<<endl;
    cout<<"3 - Удалить книгу"<<endl;
    cout<<"4 - Добавить учебник"<<endl;
    cout<<"5 - Изменить учебник"<<endl;
    cout<<"6 - Удалить учебник"<<endl;
    cout<<"7 - Добавить канцелярию"<<endl;
    cout<<"8 - Изменить канцелярию"<<endl;
    cout<<"9 - Удалить канцелярию"<<endl;
    
    int answer;
    cin >> answer;
    while(answer !=0)
    {
        switch (answer) {
            case 1:
                book.push();
                break;
                
            default:
                break;
        }
    }
    return 0;
}
