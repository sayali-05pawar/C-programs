//Searching element in an array
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int i,n,m,arr[100];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements in array: ";
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter the number to be searched: ";
    cin>>m;
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            cout<<"Number found!";
            exit(0);
        }

    }
    cout<<"Number not found?";
    return 0;
}
