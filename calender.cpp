/*
    This is a calender program.
    Developer : Amruthjith Sunil
*/


#include<iostream>

using namespace std;

unsigned c, year, month, day;

#include "./allFunctions.cpp"

int main(){
    cout<<"Enter the date : ";
    cin >> day >> month >> year;
    computeYear();
    computeMonth();
    computeException();
    c += day;
    display();
    return 0;
}
