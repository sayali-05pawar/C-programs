//To generate the first n terms of the sequence
//Fibonacci series
#include<iostream>
using namespace std;
int main ()
 {
    int n,f=0,s=1,t,i;
    cout<<"Enter the limit: ";
    cin>>n;
    cout<<"The sequence is: "<<endl;
    cout<<f<<endl<<s<<endl;

     for(i=2;i<n;i++)
     {
         t=f+s;
         cout<<t<<endl;
         f=s;
         s=t;
     }
     return 0;
 }
