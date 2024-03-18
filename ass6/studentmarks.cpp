
#include <iostream>
using namespace std;

class student
{
  int marks[1000],n;
  public:
  string Sname;
  int total;
  float avg;
  int tmax;
  void assign();
  void compute();
  void display();
};
void student :: assign()
{
    cout<<"Enter the student details:-"<<endl;
    cout<<"Name of the student: "<<endl;
    cin>>Sname;
    cout<<"Enter the Number of subjects whose marks are to be calculated: "<<endl;
    cin>>n;
    cout<<"Enter marks of the subjects: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }
}
void student :: compute()
{
    total=0;
    for(int i=0;i<n;i++)
    {
        total=total+marks[i];
    }
    avg=total/n;
}
void student :: display()
{
    cout<<"The Marks of the subjects are: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<marks[i]<<"\t";
    }
    cout<<"\nThe Total marks obtained: "<<total<<endl;
    cout<<"The average is "<<avg<<endl;
}
int main()
{
    student s1;
    s1.assign();
    s1.compute();
    s1.display();
    return 0;
}



