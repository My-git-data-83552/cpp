#include<iostream>
using namespace std;

// Q3. Write a class Address with data members (string building, string street, string city ,int pin)
// Implement constructors, getters, setters, accept(), and display() methods.
// Test the class functunalities by creating the object of class and calling all the functions.

class Address
{
private:
    string building,  street, city ;
    int pin;

public:
    Address()
    {
        building="chavan hostel";
        street= "Shanivar peth";
        city="Karad";
        pin=415110;
    }

    string getBuilding()
    {
        return building;
    }

    string getStreet()
    {
        return street;
    }

    string getCity()
    {
        return city;
    }

    int getPin()
    {
        return pin;
    }
    
    void setBuilding(string building)
    {
        this->building=building;
    }

    void setStreet(string street)
    {
        this->street=street;
    }   

    void setCity(string city)
    {
        this->city=city;
    }

    void setPin(int pin)
    {
        this->pin=pin;
    }

    void acceptAddress()
    {
        cout<<"Enter the address building, street, city with pincode\n"<<endl;
        cin>>building>>street>>city>>pin;
    }

    void dispalyAddress()
    {
        cout<<"The Address is - \nBuilding name- "<<building<<"\nStreet name- "<<street<<"\nCity - "<<city<<"\npincode- "<<pin<<endl;

    }
    

};

int main(int argc, char const *argv[])
{
    Address a1;

    // a1.acceptAddress();
    // a1.dispalyAddress();
    
    // a1.getBuilding();
    // a1.getStreet();
    // a1.getCity();
    // a1.getPin();

    // a1.setBuilding("Sunbeam Institute");
    // a1.setStreet("shanivar Peth");
    // a1.setCity("Pune");
    // a1.setPin(410055);
    // a1.dispalyAddress();
    return 0;
}
