// Q2. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
// holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
// Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
// should be menu driven and should not cause memory leakage.
// Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3]

#include <iostream>
using namespace std;

class Product
{
    int id;
    string title;
    double price;
    int discountedprice;

public:
    virtual void accept()
    {
        // partial complete function
        // todo to accept id,title,price;

        cout << "Enter the ID - ";
        cin >> id;

        cout << "Enter the title - ";
        cin >> title;

        cout << "Enter the price - ";
        cin >> price;
    }
    string getTitle()
    {
        return title;
    }

    double getPrice()
    {
        return price;
    }
    void setPrice(int price)
    {
        this->price = price;
    }

    virtual void display()
    {
        // partial complete function
        // todo to accept id,title,price;

        cout << "ID - " << id << "\nTitle - " << title << "\nPrice - " << price << endl;
    }
    void discoutFun(double dis)
    {
        int discount;
        discount = getPrice() - (getPrice() * dis);
        setPrice(discount);
    }
};
class Book : public Product
{
    string author;
    double discount;

public:
    void accept()
    {
        // complete function by accepting author;
        // also reuse the function of Product(Base) class accept
        // give discount of 10% on price and update the price.use mutators and inspector for price

        Product::accept();

        cout << "Enter the name of Author - ";
        cin >> author;
        // cout<<"Enter the discount amount - ";
    }

    void display()
    {
        // complete function by displaying author;
        // also reuse the function of Product(Base) class display

        Product::display();
        cout << "Author name - " << author << endl;
    }
};
class Tape : public Product
{
    string artist;

public:
    void accept()
    {
        // complete function by accepting artist
        // also reuse the function of Product(Base) class accept
        // give discount of 5% on price and update the price.use mutators and inspector for price

        Product::accept();
        cout << "Enter the Artist - ";
        cin >> artist;
    }
    virtual void display()
    {
        // complete function by displaying artist;
        // also reuse the function of Product(Base) class display
        // todo to display artist;

        Product::display();
        cout << "Artist - " << artist << endl;
    }
};
int main()
{
    Product *arr[3];
    int choice;
    int index = 0;
    double total = 0;
    // write menu driven code.
    // to calculate bill use for loop and call the getPrice to make total of all products

    do
    {
        cout << "0. EXIT" << endl;
        cout << "1. Buy a Book" << endl;
        cout << "2. Buy a Tape" << endl;
        cout << "3. Display the cart list" << endl;
        cout << "4. Show total of all products bought" << endl;

        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Thank You!" << endl;
            break;
        case 1: // Book sales
        {
            if (index < 3)
            {
                arr[index] = new Book;
                arr[index]->accept();
                arr[index]->discoutFun(0.05);
                cout << "Product - " << arr[index]->getTitle() << " Bought" << endl;

                index++;
                break;
            }
        }
        case 2:
        {
            if (index < 3)
            {
                arr[index] = new Tape;
                arr[index]->accept();
                arr[index]->discoutFun(0.10);
                index++;
                break;
            }
        }
        case 3:
            for (int i = 0; i < 3; i++)
            {
                arr[i]->display();
            }
            break;
        case 4:
        {
            for (int i = 0; i < 3; i++)
            {
                total += arr[i]->getPrice();
            }
            cout << "the total amount = " << total << endl;
            break;
        }
        default:
            cout << "Wrong choice!" << endl;
            break;
        }
    } while (choice != 0);
}