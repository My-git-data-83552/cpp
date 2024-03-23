// Q1. Implement following classes. Test all functionalities in main().
// Create a class Date with data memebrs day,month and year.
// Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
// type date.
// Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
// be of type date.

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
private:
    string name;
    string address;
    Date dob;

public:
    Person()
    {
        name = "Shantanu";
        address = "Sunbeam Pune";
    }
    void acceptPerson()
    {
        cout << "Enter the name of person - ";
        cin >> name;

        cout << "Enter the address of person - ";
        cin >> address;
        dob.acceptDate();
    }

    void displayPerson()
    {
        cout << "Name of person - " << name << endl
             << "Name of address - " << address << endl
             << "Date of birth = ";
        dob.displayDate();
    }
};
class Employee
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
    void acceptEmployee()
    {
        cout << "Enter the Employee ID - ";
        cin >> id;
        cout << "Enter the salary of Employee - ";
        cin >> sal;
        doj.acceptDate();
    }
    void displayEmployee()
    {
        cout << "Employee ID - " << id << endl
             << "Salary - " << sal << endl
             << "Date of joining";
        doj.displayDate();
    }
};

int main()
{
    Employee e;
    e.acceptEmployee();

    Person p;
    p.acceptPerson();

    e.displayEmployee();
    p.displayPerson();
}