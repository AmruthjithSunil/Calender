/*
    Here all the user defined functions of calender.cpp are written
    Functions are:
        computeYear
        computeMonth
        computeException
        displayDay
        monthLength
        displayMonth
        specificDay
        specificMonth
        menuDriven
*/


void computeYear() {
    Year = year;
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

void displayDay() {
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

int monthLength(){
    if(month == 2){
        if(year % 4 != 0){
            return 28;
        }
        else if(year == 0){
            return 29;
        }
        else if(year % 100 == 0){
            return 28;
        }
        else return 29;
    }
    else{
        switch (month) {
            case 1:;
            case 3:;
            case 5:;
            case 7:;
            case 8:;
            case 10:;
            case 12: return 31;
        }
        return 30;
    }
}

void displayMonth() {
    std::cout << "\t" ;
    switch (month) {
        case 1: std::cout << "January" ; break;
        case 2: std::cout << "February" ; break;
        case 3: std::cout << "March" ; break;
        case 4: std::cout << "April" ; break;
        case 5: std::cout << "May" ; break;
        case 6: std::cout << "June" ; break;
        case 7: std::cout << "July" ; break;
        case 8: std::cout << "August"; break;
        case 9: std::cout << "September"; break;
        case 10: std::cout << "October" ; break;
        case 11: std::cout << "November"; break;
        case 12: std::cout << "December"; break;
    }
    std::cout << "  " << Year << '\n';
    std::cout << " Sun Mon Tue Wed Thu Fri Sat " << '\n';
    c = c % 7;
    for (int i = 0; i <= c; i++) {
        std::cout << "    ";
    }
    int length = monthLength();
    for(int Day = 1; Day <= length; Day++){
        if((Day+c)%7 == 0){
            std::cout << '\n';
        }
        printf("%4d",Day);
    }
    std::cout << '\n';
}

void specificDay() {
    cout<<"Enter the date : ";
    cin >> day >> month >> year;
    computeYear();
    computeMonth();
    computeException();
    c += day;
    displayDay();
}

void specificMonth() {
    cout<<"Enter the date : ";
    cin >> month >> year;
    computeYear();
    computeMonth();
    computeException();
    displayMonth();
}

void menuDriven() {
    std::cout << "1.specificDay\n2.specificMonth\nEnter your choice : ";
    std::cin >> choice;
    switch (choice) {
        case 1: specificDay(); break;
        case 2: specificMonth(); break;
    }
}
