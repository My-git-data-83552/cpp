// Q1. Write a class to find volume of a Cylinder by using following members. (volume of
// Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
// Class having following member functions:
// Cylinder()
// Cylinder(double radius, double height)
// getRadius()
// setRadius()
// getHeight()
// setHeight()
// getVolume()
// printVolume()
// Initialize members using constructor member initializer list.

#include <iostream>
using namespace std;

class Cylinder
{
    static const double PI;
    double radius;
    double height;
    double volume;

public:
    Cylinder()
    {
        radius = 2.6;
        height = 3.6;
    }

    Cylinder(double r,double h) : radius(3.5), height(4.5)
    {
       
    }

    // Cylinder(double radius, double height)
    // {
    //     this->radius = radius;
    //     this->height = height;
    // }

    void setRadius(double radius)
    {
        this->radius = radius;
    }
    double getRadius()
    {
        return radius;
    }
    double getHeight()
    {
        return height;
    }
    void setHeight(int height)
    {
        this->height = height;
    }
    double getVolume()
    {
        return volume;
    }
    void printVolume()
    {
        cout << "Radius = "<<radius<<"\t"<<"Height = "<<height<<endl;
        cout << "The volume of the cylinder is = " << PI * radius * radius * height << endl<<endl;
    }
};

const double Cylinder::PI = 3.14;

int main()
{
    Cylinder c1;
    //cout<<"Object c1-->";
    c1.printVolume();

    Cylinder c2(2.5,3.5);
    //cout<<"Object c2-->";
    c2.printVolume();

    c1.setRadius(2.6);
    c1.setHeight(3.6);

    //cout<<"Using get and set functions-->";
    cout<<"Radius = "<<c1.getRadius()<<"\t"<<"Height = "<<c1.getHeight()<<endl;
    c1.printVolume();

    return 0;
}
