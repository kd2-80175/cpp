#include <iostream>
using namespace std;
/*Q2. Implement following classes. Test all functionalities in main() of each created class.
Note that
employee is inherited into manager and salesman. Insted of char[] use string datatype. */
class employee
{
private:
    int id;
    float sal;

public:
    employee()
    {
        cout<<"under employee default constructor"<<endl;
        this->id = 0;
        this->sal = 5000;
    }
    employee(int id, float sal)
    {
        cout<<"under employee constructor"<<endl;
        this->id = id;
        this->sal = sal;
    }
    int getid()
    {
        return this->id;
    }
    void setid(int id)
    {

        this->id = id;
    }
    float get_sal()
    {
        return this->sal;
    }
    void set_sal(float sal)
    {
        this->sal = sal;
    }
    void accept()
    {
        cout << "enter id:";
        cin >> id;
        cout << "enter salary:";
        cin >> sal;
    }
    void display()
    {
        cout << "the id is:" << id << endl;
        cout << "the sal of employee is:" << sal;
    }
};
class manager : virtual public employee
{
private:
    float bonus;

protected:
    void accept_manager()
    {
        
        cout << "enter bonus:";
        cin >> bonus;
    }
    void display_manager()
    {
        
        cout << "the bonus is:" << this->bonus;
    }

public:
    manager()
    {
        cout<<"under manager default constructor"<<endl;
        bonus = 0.0;
    }
    manager(int id, float sal, float bonus)
    {
        cout<<"under manager constructor"<<endl;
        employee::setid(id);
        employee::set_sal(sal);
        this->bonus = bonus;
    }
    float get_bonus()
    {
        return this->bonus;
    }
    void set_bonus(float bonus)
    {
        this->bonus = bonus;
    }
    void accept()
    {
        employee::accept();
        cout << "Enter the Bonus = ";
        cin >> this->bonus;
    }
    void display()
    {
        employee::display();
        cout << "bonus= " << this->bonus<< endl;
    }

};
class salesman : virtual public employee
{
private:
    float comm;

protected:
    void accept_salesman()
    {
        
        cout << "enter the comm:"<<endl;
        cin >> comm;
    }
    void display_salesman()
    {
        
        cout << "the commission is:" << endl;
        cin >> comm;
    }

public:
    salesman()
    {
        cout<<"under salesman default constructor"<<endl;
        this->comm=0.0;
    }
    salesman(int id, float sal, float comm)
    {
        
        cout<<"under salesman constructor"<<endl;
        setid(id);
        set_sal(sal);
        this->comm=comm;

    }
    float get_comm()
    {
        return this->comm;
    }
    void set_comm(float comm)
    {
        this->comm = comm;
    }
    void accept()
    {
        employee::accept();
        cout << "Enter the Bonus = ";
        cin >> this->comm;
    }
    void display()
    {
        employee::display();
        cout << "Comm = " << this->comm << endl;
    }

};
class sales_manager : public manager, public salesman
{
public:
    sales_manager()
    {
        cout << "Sales Manager Class Constructor" << endl;
    }
    sales_manager(int id, float sal, float bonus, float comm)
    {
        employee::setid(id);
        employee::set_sal(sal);
        manager::set_bonus(bonus);
        salesman::set_comm(comm);
    }
    void accept()
    {
        employee::accept();
        manager::accept_manager();
        salesman::accept_salesman();
    }
    void display()
    {
        employee::display();
        manager::display_manager();
        salesman::display_salesman();
    }
};
int main(){
    sales_manager s1;
    s1.accept();
    s1.display();

}