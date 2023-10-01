#include<iostream>
using namespace std;
class employee{
    int id;
    float sal;
    protected :
 string designation;
    public:
 employee(){
    this->id=0;
    this->sal=3000;
    this->designation=" ";
 }
 employee(int id,float sal,string designation){
   this->id=id;
   this->sal=sal;
   this->designation=designation;
 }
 virtual void accept(){
    cout<<"Adding details of Employees:"<<endl;
    cout<<"Enter id: ";
    cin>>id;
    cout<<"Enter sal: ";
    cin>>sal;
    cout<<"Enter designation: ";
    cin>>designation;
  }
  string getDesignation(){
    return this->designation;
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
    virtual void display()
    {
        cout << "the id is: " << id << endl;
        cout << "the sal of employee is: " << sal<<endl;
        cout<<"the designation is : "<<designation<<endl;
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
        this->designation="manager";
        
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
    virtual void accept()
    {
        this->designation="manager";
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
        this->designation="Salesman";
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
        this->designation="salesman";
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
        this->designation="salesmanager";
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
        this->designation="salesmanager";
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
int menu(){
    int choice;
    cout << "-----------------------------------------" << endl;
    cout << "WELCOME TO CPP - Employee management" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Accept Employee " << endl;
    cout << "2. Display the count with respect to designation " << endl;
    cout << "3. Display respective designation " << endl;
    cout << "4. Display ALL employee " << endl;
    cout << "Please enter your choice : ";
    cin >> choice;
    cout << "------------------------------------------" << endl;
    return choice;
}


int main(){
    int choice;
    employee *arr[10];
    string designation;
    int index=0;
    int mcount=0;
    int scount=0;
    int smancount=0;
    
    while((choice=menu()!=0)){
        switch(choice){
        case 1:
        if(index<10){
        cout<<"type designation (m-manager ,s-Salesman ,sm-salesmanager) : ";
        cin>>designation;
        if(designation=="m"){
        arr[index]=new manager;
        arr[index]->accept();
        index++;
      }
      else if(designation=="s"){
        arr[index] = new salesman;
                    arr[index]->accept();
                    index++;
      }
      else if(designation=="sm"){
        arr[index] = new sales_manager;
        arr[index]->accept();
        index++; 
      }
      else
      {
        cout<<"wrong choice "<<endl;
        }
        }
        else
        {
            cout<<"List is full " <<endl;
        }
        break;
        case 2:
              scount=0;
              mcount=0;
              smancount=0;
        for(int i=0; i<index; i++){
       if(arr[i]->getDesignation()=="manager"){
        mcount++;
       }
       else if(arr[i]->getDesignation()=="salesman"){
        scount++;
       }
       else if(arr[i]->getDesignation()=="manager"){
        smancount++;
       }
        }
       cout << "Manager : " << mcount << endl;
            cout << "Salesman : " << scount << endl;
            cout << "Sales_Manager : " << smancount << endl; 
    

     break;
        case 3:
            cout << "Please type the designation (s-Salesman , m-Manager , sm-salesmanager) : ";
            cin >> designation;
            for (int i = 0; i < index; i++)
            {
                if (designation == arr[i]->getDesignation())
                {
                    arr[i]->display();
                }
            }

            break;
        case 4:
            for (int i = 0; i < index; i++)
                arr[i]->display();

            break;
        default:
            cout << " Try Again :" << endl;
            break;
        }
    }

    for (int i = 0; i < index; i++)
        delete[] arr[i];
}



