#include <iostream>
using namespace std;
/*Q2. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
should be menu driven and should not cause memory leakage.*/
class Product
{
private:
    int id;
    string title;
    int price;

protected:
    char type;

public:
    Product()
    {
        this->id = 0;
        this->title = "";
        this->price = 0;
    }
    virtual void acceptData()
    {
        cout << "id:";
        cin >> id;
        getchar();
        cout << "title:";
        getline(cin, title);
        cout << "price:";
        cin >> price;
    }
    virtual void displayData() = 0;

    int getId()
    {
        return this->id;
    }
    string getTitle()
    {
        return this->title;
    }
    int getPrice()
    {
        return this->price;
    }
    void setPrice(int Price)
    {
        this->price = price;
    }
    char getType()
    {
        return this->type;
    }

    // friend double CalculateBill(int productcount, Product arr[10]);
};
class Book : public Product
{

    string author;

public:
    Book()
    {
        cout << "under the book constructor" << endl;
        this->type = 'B';
    }
    void acceptData()
    {
        cout << "Enter Detail Of Book:" << endl;
        cout << "enter the author name: ";
        cin >> this->author;
        Product::acceptData();
    }

    void discounted()
    {
        setPrice(getPrice() * 0.90);
    }

    void displayData()
    {
        cout << "The Book Details" << endl;
        cout << "The name of the author is:  " << this->author << endl;
        cout << "The book id is:  " << getId();
        cout << "The book Title is:  " << getTitle();
        cout << "The book Price is:  " << getPrice();
    }
};

class Tape : public Product
{
    string artist;

public:
    Tape()
    {
        cout << "under the tape constructor" << endl;
        this->type = 'T';
    }

    void acceptData()
    {
        cout << "Enter Detail Of Tape:" << endl;
        cout << "enter the name of artist:";
        cin >> artist;

        Product::acceptData();
    }

    void discounted()
    {
        setPrice(getPrice() * 0.95);
    }
    void displayData()
    {
        cout << "The Detail Of Tape:" << endl;
        cout << "the artist name is: " << this->artist << endl;
        cout << "The tape id is:  " << this->getId();
        cout << "The tape Title is:  " << this->getTitle();
        cout << "The tape Price is:  " << this->getPrice();
    }
};
void CalculateBill(int productcount, Product **arr)
{
    double total_bill = 0;
    double books_bill = 0;
    double Tape_bill = 0;
    double bill_discount = 0;
    int bookd_count;

    for (int i = 0; i < productcount; i++)
    {
        if (arr[i]->getType() == 'B')
        {
            books_bill += arr[i]->getPrice();
        }
        else
        {
            if (arr[i]->getType() == 'T')
            {
                Tape_bill += arr[i]->getPrice();
            }
        }
    }
    total_bill = books_bill + Tape_bill;
    cout << total_bill;
    cout << "book bill: " << books_bill;
    cout << "Tape bill:" << Tape_bill;
}

int menu()
{
    int choice;
    cout << "***********************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Accept detail of Book" << endl;
    cout << "2. Accept detail of Tape" << endl;
    cout << "3 calculate the total bill" << endl;
    cout << "4 display the total bill" << endl;
    cout << "Enter Your Choice=";
    cin >> choice;
    cout << "************************" << endl;
    return choice;
}
int main()
{
    
    int choice;
    Product *arr[10];
    int productcount = 0;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            if (productcount < 10)
            {
                arr[productcount] = new Book();
                arr[productcount]->acceptData();
                productcount++;
            }
            else
                cout << "Array is full,cannot add the Book object.." << endl;
            break;

        case 2:
            if (productcount < 10)
            {
                arr[productcount] = new Tape();
                arr[productcount]->acceptData();
                arr[productcount]->displayData();
                productcount++;

            }
            break;
        case 3:
            CalculateBill(productcount, arr);
            break;
        case 4:
            for (int i = 0; i < productcount; i++)
            {
                arr[i]->displayData();
            }
            break;
        }
    }
    return 0;
}