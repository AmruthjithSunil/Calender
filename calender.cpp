#include<iostream>

using namespace std;

int main(){
    unsigned c, y, m, d;
    cout<<"Enter the date : ";
    cin>>d>>m>>y;
    y = y % 400;
    c = y + y/4;
    switch(m){
        case 1: c+=6; break;
        case 2: c+=2; break;
        case 3: c+=2; break;
        case 4: c+=5; break;
        case 5: c+=0; break;
        case 6: c+=3; break;
        case 7: c+=5; break;
        case 8: c+=1; break;
        case 9: c+=4; break;
        case 10: c+=6; break;
        case 11: c+=2; break;
        case 12: c+=4; break;
    }
    if(m < 3 && y%4 == 0){
        c--;
    }
    c -= y/100;
    c += d;
    switch(c % 7){
        case 0: cout<<"Sun"; break;
        case 1: cout<<"Mon"; break;
        case 2: cout<<"Tues"; break;
        case 3: cout<<"Wednes"; break;
        case 4: cout<<"Thurs"; break;
        case 5: cout<<"Fri"; break;
        case 6: cout<<"Satur"; break;
    }
    cout<<"day\n";
    return 0;
}
