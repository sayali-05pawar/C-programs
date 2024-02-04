#include <iostream>
using namespace std;
int main() {
    int n;
    int greatest, smallest;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements in array: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    greatest = a[0];
        for (int i = 0; i < n; i++){
            if(greatest < a[i]){
                greatest = a[i];
            }
        }
     smallest = a[0];
        for (int i = 0; i < n; i++){
            if(smallest > a[i]){
                smallest = a[i];
            }
        }
    
    cout<<"The smallest element in given array is "<<smallest<<endl;
    cout<<"The greatest element in given array is "<<greatest<<endl;
    
    return 0;
}
