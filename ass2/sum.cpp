//Finding the sum of individual digits of a positive integer
#include<iostream>
using namespace std;
int main()
{
    int n,m,sum=0;
    cout<<"Enter the a positive integer: ";
    cin>>n;
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    cout<<"Sum of the individual digit is: "<<sum;
    return 0;
}
