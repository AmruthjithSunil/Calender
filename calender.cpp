/*
    This is a calender program.
    Developer : Amruthjith Sunil
*/


#include <iostream>
#include <stdio.h>

using namespace std;

unsigned choice, c, year, month, day;

#include "./allFunctions.cpp"

int main(){
    do{
        menuDriven();
        std::cout << "press 0 to exit :" << '\n';
        std::cin >> choice;
    }while(choice);
    std::cout << "Thank you" << '\n';
    return 0;
}
