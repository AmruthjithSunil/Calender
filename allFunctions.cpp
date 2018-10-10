/*
    Here all the user defined functions of calender.cpp are written
    Functions are:
        computeYear
        computeMonth
        computeException
        displayDay
        displayMonth
        specificDay
        specificMonth
        menuDriven
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

void displayMonth() {
    std::cout << "\t" ;
    switch (month) {
        case 1: std::cout << "January" << '\n'; break;
        case 2: std::cout << "February" << '\n'; break;
        case 3: std::cout << "March" << '\n'; break;
        case 4: std::cout << "April" << '\n'; break;
        case 5: std::cout << "May" << '\n'; break;
        case 6: std::cout << "June" << '\n'; break;
        case 7: std::cout << "July" << '\n'; break;
        case 8: std::cout << "August" << '\n'; break;
        case 9: std::cout << "September" << '\n'; break;
        case 10: std::cout << "October" << '\n'; break;
        case 11: std::cout << "November" << '\n'; break;
        case 12: std::cout << "December" << '\n'; break;
    }
    std::cout << " Sun Mon Tue Thu Fri Sat " << '\n';
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
