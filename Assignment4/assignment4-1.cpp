#include <iostream>
using namespace std;

class Stack
{
private:
    int size;
    int top;
    int *ptr;

public:
    Stack(int size = 5)

    {
        this->size = size;
        top = -1;
        ptr = new int[size];
    }

    void push(int value)
    {
        if (!isFull())
        {
            cout << "Enter the value to push on the stack = ";
            cin >> value;
            ptr[top] = value;
            top++;
            cout << "Stack element pushed" << endl;
        }
        else
            cout << "Stack Overflow" << endl;
    }
    void pop()
    {
        if (!isEmpty())
        {
            top--;
            cout << "Stack popped" << endl;
        }
        else
            cout << "Stack underflow" << endl;
    }
    void peek()
    {
        cout << "The top element on stack is - " << ptr[top-1] << endl;
    }
    void print()
    {
        cout << "Stack - ";
        for (int i = -1; i < top; i++)
        {
            cout << ptr[i] << "\t";
        }
        cout << endl;
    }
    bool isFull()
    {
        return top == (size - 1);
    }
    bool isEmpty()
    {
        return top == -1;
    }
    ~Stack()
    {
        delete[] ptr;
        ptr = NULL;
    }
};

enum Emenu
{
    EXIT,
    PUSH,
    POP,
    PEEK,
    PRINT
};

int main()
{
    int size;
    int choice;
    int value;

    cout << "Please enter the size of array- ";
    cin >> size;
    Stack s1(size);

    do
    {
        cout << "0. Exit" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display all stack elemets" << endl;
        cout << "Enter your choice - ";
        cin >> choice;
        switch (Emenu(choice))
        {
        case EXIT:
            cout << "Thank you!" << endl;
            break;

        case PUSH:
            s1.push(value);
            break;

        case POP:
            s1.pop();
            break;

        case PEEK:
            s1.peek();
            break;

        case PRINT:
            s1.print();
            break;

        default:
            cout << "Wrong choice" << endl;
            break;
        }
    } while (choice != 0);
    return 0;
}