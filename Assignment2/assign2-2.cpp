#include<iostream>
using namespace std;

// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
// Mostly they do, but sometimes a car goes by without paying.
// The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
// collected. Model this tollbooth with a class called tollbooth.
// The two data items are a type unsigned int to hold the total number of cars, and a type double to
// hold the total amount of money collected.
// A constructor initializes all data members to 0. A member function called payingCar() increments
// the car total and adds 0.50 to the cash total. An other function, called nopayCar()
// increments the car total but adds nothing to the cash total. Finally, a member function called
// printOnConsole() displays the two totals and number of paying as well as non paying cars total.

class Tollbooth
{
private:
    int carstotal;
    double amount;

public:

    Tollbooth()
    {
        carstotal=0;
        amount=0;
    }
    void payingCar()
    {
        carstotal++;\
        amount+=0.50;
    }

    void nopayCar()
    {
        carstotal++;
    }
    void printOnConsole()
    {
        cout<<"The total number of cars is - "<<carstotal<<endl;
        cout <<"The total amount recieved is - "<<amount<<endl;

    }

};

int main()
{
    int choice;
    Tollbooth t1;

    do{
    cout<<"0.Exit\n1. The car paid\n2. The car did not pay\n3. Check the details\nEnter your choice"<<endl;
    cin>>choice;

    switch(choice){
        
    case 0:
            cout << "Thank you! \n" <<endl;
            break;

    case 1:
            t1.payingCar();
            cout<<"SAVED"<<endl;
            break;
    case 2:
            t1.nopayCar();
            cout<<"SAVED"<<endl;
            break;

    case 3:
            t1.printOnConsole();
            break;
   
    default:
        cout<<"Wrong choice\n"<<endl;
        break;

    }
    }while(choice!=0);
    return 0;
}

