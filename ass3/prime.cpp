#include <iostream>
using namespace std;
int main() {
    int n;
    int flag=0;
    cout<<"Enter the number : "; //upto which you want to find prime numbers 
    cin>>n;
    if(n==0 || n==1){
        cout<<"Error\n";
    }
    else{
        for(int i=2; i<n; i++){
            flag=0;
            for(int j=2; j<i; j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
                
            }
            if(flag==0){
                cout<<i<<" ";
            }
            
        }
    }
    return 0;
}
