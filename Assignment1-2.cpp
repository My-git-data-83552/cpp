#include<iostream>
using namespace std;

// Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
// Date is having data members day, month, year. Implement the following functions.
// void initDate();
// void printDateOnConsole();
// void acceptDateFromConsole();
// bool isLeapYear

struct Date
{
    int day;
    int month;
    int year;

    void initDate()
    {
        day=19;
        month=03;
        year=2024;
        cout << "The initial date is - " << day << " / " << month << " / " << year<< endl;
    }
    void acceptDateFromConsole()
    {
        cout << "Enter the Date - " ;
        cin >> day >> month >> year;
    }
    void printDateOnConsole()
    {
        cout << "The Date is - " << day << " / " << month << " / " << year << endl;
    }
};

int main()
{   
    Date d1;
    int choice;

    do{
        printf("1. the display the initial date \n2. To enter a date \n3. To display the date\nEnter your choice\n");
        scanf("%d",&choice);


        switch (choice)
        {
        case 0:
        cout << "Thank you!\n" << endl;
            break;
        case 1:
            d1.initDate();
            break;

        case 2:
            d1.acceptDateFromConsole();
            break;
                
        case 3:
            d1.printDateOnConsole();
            break;
        default:
            cout << "Wrong choice\n" << endl;
            break;
        }
        }
        while(choice!=0);

return 0;

}