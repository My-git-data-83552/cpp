#include <iostream>
using namespace std;

// Q2. Write a class for Time and provide the functionality
// Time()
// Time(int h,int m,int s)
// getHour()
// getMinute()
// getSeconds()
// printTime()
// setHour()
// setMinute()
// setSeconds()
// Allocate the memory for the the object dynamically and test the functunalities using time ptr.

class Time
{
    int h;
    int m;
    int s;

public:
    Time()
    {
        h = 12;
        m = 30;
        s = 59;
    }

    Time(int hours, int minutes, int seconds)
    {
        h = hours;
        m = minutes;
        s = seconds;
    }

    int getHour()
    {
        return h;
    }
    int getMinutes()
    {
        return m;
    }
    int getSecond()
    {
        return s;
    }

    void print()
    {
        cout << "Time - " << h << " : " << m << " : " << s << endl;
    }

    void setHour(int hour)
    {
        h = hour;
    }

    void setMinute(int minute)
    {
        m = minute;
    }
    void setSecond(int second)
    {
        s = second;
    }
};

int main()
{
    Time *ptr1;
    Time *ptr2;

    ptr1 = new Time;
    ptr1->setHour(10);
    ptr1->setMinute(30);
    ptr1->setSecond(45);

    cout << "Time - " << ptr1->getHour() << " : " << ptr1->getMinutes() << " : " << ptr1->getSecond() << endl;

    ptr2 = new Time(2, 30, 15);
    ptr2->print();

    delete ptr1;
    delete ptr2;

    ptr1 = NULL;
    ptr2 = NULL;

    return 0;
}
