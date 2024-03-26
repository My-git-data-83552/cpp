// Q1. Create a class Date with data memebrs day,month and year.
// Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
// type Date.
// Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
// be of type date.
// Employee class should be inherited from Person.
// Implement following classes. Test all functionalities in main().
// (Note - Perform the Association and Inheritance in the above case.)

#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:
    Date()
    {
        day = 1;
        month = 1;
        year = 1970;
    }

    void acceptDate()
    {
        cout << "Enter Date = ";
        cin >> day;
        cout << "Enter month = ";
        cin >> month;
        cout << "Enter Year = ";
        cin >> year;
    }

    void displayDate()
    {
        cout << "Date = " << day << " / " << month << " / " << year << endl;
    }
};
class Person
{
    string name;
    string address;
    Date dob;

public:
    Person()
    {
        name = "Shantanu";
        address = "Sunbeam Pune";
    }

    virtual void acceptData()
    {
        cout << "Name of the person - ";
        cin >> name;

        cout << "Address of the person - ";
        cin >> address;

        dob.acceptDate();
    }
    virtual void displayData()
    {
        cout << "Name of person - " << name << endl
             << "Name of address - " << address << endl
             << "Date of birth = ";
        dob.displayDate();
    }
};
class Employee : public Person
{
    int id;
    double sal;
    string dept;
    Date doj;

public:
    Employee()
    {
        id = 1;
        sal = 2000;
        dept = "Marketing";
    }
    void acceptDate()
    {
        cout << "Enter the Employee ID - ";
        cin >> id;
        cout << "Enter the salary of Employee - ";
        cin >> sal;
        doj.acceptDate();
    }
    void displayData()
    {
        cout << "Employee ID - " << id << endl
             << "Salary - " << sal << endl
             << "Date of joining";
        doj.displayDate();
    }
};
int main()
{
    
    // Employee p;
    // p.acceptData();
    // p.displayData();

    Person *ptr=new Employee; //Late binding person data will accept and display.
    ptr->acceptData();
    ptr->displayData();

    delete ptr;
    ptr=NULL;

    // Person *eptr = new Employee;
    // eptr->acceptData();
    // eptr->displayData();
    return 0;
}
