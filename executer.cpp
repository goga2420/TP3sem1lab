//
//  executer.cpp
//  TP3sem1lab
//
//  Created by GeorgeZh on 10/22/23.
//

#include <stdio.h>
#include <iostream>
#include "Book1.hpp"
#include "TextBook.hpp"
#include "Stationery.hpp"


template<typename T>
void Execute(T& templat, std::string file)
{
    int answer, number;
    cout << "1 - Show content"<<endl;
    cout << "2 - Add content"<<endl;
    cout << "3 - Change content"<<endl;
    cout << "4 - Erase content"<<endl;
    cout << "5 - Download content"<<endl;
    cout << "4 - Upload content"<<endl;
    cin>>answer;
    while(answer!=0)
    {
        
        switch (answer) {
        case 1:
            templat.Get();
            system("pause");
            break;
                
        case 2:
            templat.Set();
            system("pause");
            break;
                
        case 3:
            templat.Get();
            std::cout << "Number of element to change: ";
            std::cin >> number;
            templat.Edit(number);
                
        case 4:
            templat.Get();
            templat.Pop();
            break;
           
        case 5:
            templat.ToFile(file);
            break;
                
        case 6:
            templat.FromFile(file);
            break;
                
        case 0:
            break;
        default:
            std::cout << "Wrong input\n";
            system("pause");
            break;
        }
    }
    
}