//Employee database
#include<iostream>
using namespace std;

class employee
{
    public:
    int id;
    string name;
    int s;
    employee();
    employee(int,string,int);
    employee(employee &A);
    
    void read();
    void display();
    
};

void employee::read()
{
    cout<<"Enter the employee details in sequence of: 1.Employee Id 2.Employee name 3.Employee Salary"<<endl;
    
    cin>>id>>name>>s;
}

employee::employee()
{
 
  id=156;
  name="Pranali";
  s=500;
}
employee::employee(int a,string b,int c)
{
    id=a;
    name=b;
    s=c;
}
employee::employee(employee &A)
{
    id=A.id;
    name=A.name;
    s=A.s;
}
void employee::display()
{
    cout<<id<<endl<<name<<endl<<s<<endl;
}


int main()
{
    employee e1;
    e1.display();//Defalut constructor is called
    e1.read();
    
    employee e2(999,"Riya",600);//Parameterized constructor is called
    e2.display();
    
    employee e3(e2);//Copy constructor is called
    e3.display();
    
    return 0;
}
