#include <iostream>
using namespace std;

class A
{
    int n,small,great,array[100]; 
public:
    void input()
    {
        cout << "Enter the number  : ";
        cin >> n;
        cout<<"The elements in the array : ";
        for(int i = 0; i<n; i++){
            cin>>array[i];
        }
    }
    void smallest(){
        small = array[0];
        for (int i = 0; i < n; i++){
            if(small > array[i]){
                small = array[i];
            }
        }
    }
    void greatest(){
        great = array[0];
        for (int i = 0; i < n; i++){
            if(great < array[i]){
                great = array[i];
            }
        }
    }
    void ouput(){
        cout<<"Smallest element in the array is : "<<small<<endl<<"Greatest element in the array is : "<<great;
    }
};
int main()
{

    A b;
    b.input();
    b.smallest();
    b.greatest();
    b.ouput();
    return 0;
}
