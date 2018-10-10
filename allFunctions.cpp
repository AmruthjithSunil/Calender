/*
    Here all the user defined functions of calender.cpp are written
    Functions are:
        computeYear
        computeMonth
        computeException
        display
*/


void computeYear() {
    year = year % 400;
    c = year + year/4;
}

void computeMonth() {
    switch(month){
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
}

void computeException() {
    if(month < 3 && year%4 == 0){
        c--;
    }
    c -= year/100;
}

void display() {
    cout << "\t";
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
}
