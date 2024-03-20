#include<iostream>
using namespace std;

// Q1. Write a menu driven program to calculate volume of the box(length * width * height).
// Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
// Create the local objects in respective case and call the function to caluclate area.
// Menu options ->
// 1. Calculate Volume with default values
// 2. Calculate Volume with length,breadth and height with same value
// 3. Calculate Volume with different length,breadth and height values.

class Box
{
private:
    int length;
    int width;
    int height;

public:

    Box()
    {
        length = 2;
        width = 4;
        height = 6;
    }

    Box(int value)
    {
        length = value;
        width = value;
        height = value;
    }
    
    Box(int length, int width, int height)
    {
        this->length=length;
        this->width=width;
        this->height= height;
    }

    void calculateVolume()
    {
        int volume;
        volume = length*width*height;
        cout << "Volume = " << volume << endl;
        
    }

};

int main()
{
    int choice;
        
        Box b1;
        Box b3(2,3,4);
        Box b2(5);
    do
    {
    cout << "Please select the option\n0. Exit\n1. 1. Calculate Volume with default values\n2. Calculate Volume with length,breadth and height with same value\n3. Calculate Volume with different length,breadth and height values.\n"<<endl;        
    cin >> choice ;
    switch (choice)
    {
    case 0:
        cout << "Thank you! \n" <<endl;
        break;

    case 1:
        b1.calculateVolume();
        break;

    case 2:
        b2.calculateVolume();  
        break;

    case 3:
        b3.calculateVolume();   
        break;   
    
    default:
        cout<<"Wrong choice\n"<<endl;
        break;
    }
    }while (choice != 0);
}



