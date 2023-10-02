/* Q3. Modify assignment 9 – Q2 to save all accounts data into STL list. 
Provide additional facility to
display all accounts in forward and reverse order using iterators.*/
#include <iostream>
using namespace std;
enum account_type
{
    EXIT,
    SAVING,
    CURRENT,
    DMAT,
};
// account_type menu()
// {
//     int  choice;
//     cout << "*******************" << endl;
//     cout << "0. for Exit " << endl;
//     cout << "1. for Saving" << endl;
//     cout << "2. for Current" << endl;
//     cout << "3. for DMAT" << endl;
//     cout << "Enter your choices: " << endl;
//     cin >> choice;
//     cout << "**********************" << endl;
//     return account_type(choice);
// }
class fund
{
    int accid;
    double cur_balance;
    double withdraw_amount;

public:
    fund(int accid, double cur_balance, double withdraw_amount)
    {
        this->accid = accid;
        this->cur_balance;
        this->withdraw_amount;
    }
    void display()
    {
        cout << "the account id " << accid << endl;
        cout << "cur_balance " << cur_balance << endl;
        cout << "the withdrawn money is: " << withdraw_amount << endl;
    }
};

class Account
{
private:
    int id;
    account_type type;
    double balance;

public:
    Account()
    {
        this->id = 0;
        this->balance = 0;
    }
    Account(int id, account_type type)
    {
        this->id = id;
        this->type = type;
    }
    void accept()
    {
        int n;
        cout << "enter the id: ";
        cin >> this->id;
        cout << "enter the type: ";
        cout << "*******************" << endl;
        cout << "0. for Exit " << endl;
        cout << "1. for Saving" << endl;
        cout << "2. for Current" << endl;
        cout << "3. for DMAT" << endl;
        cout << "Enter your choices: " << endl;
        cin >> n;
        this->type = account_type(n);

        // this->type = menu();
        cout << "enter the balance: ";
        cin >> balance;
    }
    void display()
    {
        cout << "the id is : " << this->id << endl;
        switch (type)
        {
        case 1:
            cout << "the type of account is Saving Account: " << endl;
            break;
        case 2:
            cout << "the type of account is Saving Account: " << endl;
            break;
        case 3:
            cout << "the type of account is Saving Account: " << endl;
            break;
        default:
            cout << "the type of account is wrong. .. TRY AGAIN " << endl;
            break;
        }

        cout << "the balance is: " << this->balance;
    }

    void set_Id(int id)
    {
        this->id = id;
    }
    void set_Type(account_type type)
    {
        this->type = type;
    }
    int get_id()
    {
        return this->id;
    }
    account_type get_Type()
    {
        return this->type = type;
    }
    double get_Balance()
    {
        return this->balance;
    }
    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "the balance is: " << balance<<endl;
    }
    void withdraw(double amount)
    {
        
        if (amount > this->balance)
        {
            throw fund(this->id,this->balance ,amount);
        }
        else
        {
            balance = balance - amount;
            cout << "the balance is: " << balance<<endl;
        }
    }
};

int menu1()
{
    int choice;
    cout << "___________________" << endl;
    cout << "0. for Exit" << endl;
    cout << "1. for Accept" << endl;
    cout << "2. for deposit" << endl;
    cout << "3. for display" << endl;
    cout << "4.for withdraw" << endl;
    cout << "enter your choice: ";
    cin >> choice;
    cout << "_________________" << endl;
    return choice;
}
int main()
{
    Account *account[5];

    int id;
    int choice;
    double amount;
    while ((choice = menu1()) != 0)
    {

        switch (choice)
        {
        case 1:
            for (int i = 0; i < 5; i++)
            {
                account[i] = new Account();
                account[i]->accept();
            }
            break;
        case 2:
            cout << "enter the id";
            cin >> id;
            for (int i = 0; i < 5; i++)
            {

                if (id == account[i]->get_id())
                {
                    cout << "enter the amount";
                    cin >> amount;
                    account[i]->deposit(amount);
                }
            }
            break;
        case 3:
            for (int i = 0; i < 5; i++)
            {
                account[i]->display();
            }
            break;
        case 4:
        cout << "enter the id";
            cin >> id;
            for (int i = 0; i < 5; i++)
            {

                if (id == account[i]->get_id())
                {
                    cout << "enter the amount";
                    cin >> amount;
                    try{
                    account[i]->withdraw(amount);
                    }
                    catch(fund e){
                        e.display();
                    }
                }
            }
            break;
        default:
            cout << "wrong choice" << endl;
            break;
        }
    }
}