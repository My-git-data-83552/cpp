// Q1. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using
// Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not
// given, allocate stack of size 5.
// Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().

#include <iostream>
using namespace std;

class Stack
{
    int size;
    int static index;
    int *ptr;

public:
    Stack(int size) : size(5)
    {
        this->size = size;

        ptr = new int[size];
    }
    void push()
    {
        int value;
        if (index >= 0 && index < size)
        {
            cout << "Enter the value to push on the stack = ";
            cin >> value;

            ptr[index] = value;
            index++;
        }
        else
            cout << "The stack is Full" << endl;
    }
    void pop()
    {
        index--;
        cout << "stack popped" << endl;
    }
    void peek()
    {
        cout << "The top element is - " << ptr[index-1] << endl;
    }
    void isEmpty()
    {
        if (index <= 0)
            cout << "The stack is empty" << endl;
        else
            cout << "The stack is not empty" << endl;
    }
    void isFull()
    {
        if (index == size)
            cout << "The stack is Full" << endl;
        else
            cout << "The stack is not full" << endl;
    }
    void print()
    {
        cout << "Stack - ";
        for (int i = 0; i < index; i++)
        {
            cout << ptr[i] << "\t";
        }
        cout << endl;
        // int pos;
        // cout<<"Enter the position to check = ";
        // cin>>pos;
        // if(pos>=0 ||pos<index)
        // cout << ptr[pos]<<endl;
        // else
        // cout<<"Invalid input!"<<endl;
    }
    ~Stack()
    {
        delete[] ptr;
        ptr = NULL;
    }
};

int Stack::index = 0;

enum Emenu
{
    EXIT,
    PUSH,
    POP,
    PEEK,
    IS_EMPTY,
    IS_FULL,
    PRINT
};

int main()
{
    int size;
    int choice;
    cout << "Please enter the size of array- ";
    cin >> size;
    Stack s1(size);

    do
    {
        cout << "0. Exit" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Check to see if Stack is Empty" << endl;
        cout << "5. Check to see if Stack is Full" << endl;
        cout << "6. Display all stack elemets" << endl;
        cout << "Enter your choice - ";
        cin >> choice;
        switch (Emenu(choice))
        {
        case EXIT:
            cout << "Thank you!" << endl;
            break;
        case PUSH:
            s1.push();
            break;
        case POP:
            s1.pop();
            break;
        case PEEK:
            s1.peek();
            break;
        case IS_EMPTY:
            s1.isEmpty();
            break;
        case IS_FULL:
            s1.isFull();
            break;
        case PRINT:
            s1.print();
            break;
        default:
            cout << "CDAC" << endl;
            break;
        }
    } while (choice != 0);
}
