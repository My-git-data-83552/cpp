// Q3. Write a menu driven program for Student in CPP language. Create a class student with data
// members roll no, name and marks. Implement the following functions
// void initStudent();
// void printStudentOnConsole();
// void acceptStudentFromConsole();

#include <iostream>
using namespace std;

class student
{
    int rollno;
    string name;
    double marks;

public:
    void initStudent()
    {
        rollno=83552;
        name="Shantanu Khilare";
        marks= 100;
        cout << "The initial values of students is - " << "\nRoll number = " << rollno << "\nName of the student is - " << name << "\nStudents marks = " <<  marks<< "\n" <<endl;
    }
    void acceptStudentFromConsole()
    {
        cout << "Enter the student roll number - \t";
        cin >> rollno;
        cout << "\nEnter the student name - \t";
        cin >> name;
        cout << "\nEnter the student marks - \t";
        cin >> marks; 
    }

    void printStudentOnConsole()
    {
        cout << "The detail students is - " << "\nRoll number = " << rollno << "\nName of the student is - " << name << "\n Students marks = " <<  marks<< endl;
    }
    
};
    int main(int argc, char const *argv[])
    {
        student s1;
        int choice;
        
    do{
        printf("1. the display the initial student details \n2. To enter a student info \n3. To display the student info\nEnter your choice\n");
        scanf("%d",&choice);


        switch (choice)
        {
        case 0:
        cout << "Thank you!\n" << endl;
            break;
        case 1:
            s1.initStudent();
            break;

        case 2:
            s1.acceptStudentFromConsole();
            break;
                
        case 3:
            s1.printStudentOnConsole();
            break;
        default:
            cout << "Wrong choice\n" << endl;
            break;
        }
        }
        while(choice!=0);

return 0;
    }
