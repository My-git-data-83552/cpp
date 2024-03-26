#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {
        // cout << "Inside Employee()" << endl;
    }
    Employee(int id, double salary)
    {
        // cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        // cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
        // cout << "Inside Manager()" << endl;
    }
    Manager(int id, double salary, double bonus)
    {
        // cout << "Inside Manager(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
    virtual ~Manager()
    {
        // cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {
        // cout << "Inside Salesman()" << endl;
    }
    Salesman(int id, double salary, double commission)
    {
        // cout << "Inside Salesman(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    virtual ~Salesman()
    {
        // cout << "~Salesman()" << endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        // cout << "Inside Salesmanager()" << endl;
    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        // cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    virtual ~SalesManager()
    {
        // cout << "~Salesmanager()" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

int main()
{
    int choice;
    int department;
    int index;
    int empManager;
    int empSalesman;
    int empSalemanager;
    Employee *arr[10];

    do
    {
        cout << "0 . Exit" << endl;
        cout << "1 . Accept an employee" << endl;
        cout << "2 . Display the count of all employees with respect to designation" << endl;
        cout << "3 . Display All Managers" << endl;
        cout << "4 . Display All Salesman" << endl;
        cout << "5 . Display All SalesManagers" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Thank you!" << endl;
            break;

        case 1:
        {
            cout << "1. Accept Manager" << endl;
            cout << "2. Accept Salesman" << endl;
            cout << "3. Accept SalesManager" << endl;
            cin >> department;
            if (department == 1)
            {
                arr[index] = new Manager();
                arr[index]->accept();
                index++;
            }
            else if (department == 2)
            {
                arr[index] = new Salesman();
                arr[index]->accept();
                index++;
            }
            else if (department == 3)
            {
                arr[index] = new SalesManager;
                arr[index]->accept();
                index++;
            }
            else
                cout << "Wrong choice" << endl;
            break;
        }
        case 2:
            for (int i = 0; i < index; i++)
            {
                if (typeid(arr[i]) == typeid(Manager))
                    empManager++;

                if (typeid(arr[i]) == typeid(Salesman))
                    empSalesman++;

                if (typeid(arr[i]) == typeid(SalesManager))
                    empSalemanager++;
            }
            cout << "Count of Managers - " << empManager << endl;
            cout << "Count of Salesman - " << empSalesman << endl;
            cout << "Count of Salesmanager - " << empSalemanager << endl;
            break;
        case 3:
            for (int i = 0; i < index; i++)
            {
                if (typeid(arr[i]) == typeid(Manager))
                    cout << "List of Managers" << endl;
                arr[index] = new Manager();
                arr[i]->display();
                cout << "========================================================" << endl;
            }
            break;
        case 4:
            for (int i = 0; i < index; i++)
            {
                if (typeid(arr[i]) == typeid(Salesman))
                    cout << "List of Salesman" << endl;
                arr[index] = new Salesman();
                arr[i]->display();
                cout << "========================================================" << endl;
            }
            break;
        case 5:
            for (int i = 0; i < index; i++)
            {
                if (typeid(arr[i]) == typeid(SalesManager))
                    cout << "List of SalesManager" << endl;
                arr[index] = new SalesManager();
                arr[i]->display();
                cout << "========================================================" << endl;
            }
            break;

        default:
            break;
        }
    } while (choice != 0);
    for (int i = 0; i < index; i++)
    {
        delete arr[i];
        arr[i] = NULL;
    }

    return 0;
}

// // Employee *eptr = new Employee();
// // Employee *eptr = new Manager();
// // Employee *eptr = new Salesman();
// Employee *eptr = new SalesManager();
// eptr->accept(); // Late Binding
// eptr->display();

// delete eptr;
// eptr = NULL;

// int main1()
// {
//     // Employee obj;
//     // Manager obj;
//     // Salesman obj;
//     SalesManager obj;
//     obj.accept();
//     obj.display();
//     return 0;
// }