//program to use constructor
#include <iostream>
using namespace std;
class bank {
    string name;
    string type__acc;
    int acc__no;
    float balance;
    public:
    bank(){
        name="NULL";
        type__acc="NULL";
        acc__no=00;
        balance=0.0;
    }
    bank(string n,string t,int a,float b);
    bank(bank &x);
    void input();
    void deposit();
    void withdrawl();
    void display();
};
bank::bank(string n, string t, int a, float b){
    name=n;
    type__acc=t;
    acc__no=a;
    balance=b;
    }
bank::bank(bank &x){
    name=x.name;
    type__acc==x.type__acc;
    acc__no=x.acc__no;
    balance=x.balance;
}
void bank::display(){
    cout<<name<<"\t"<<type__acc<<"\t"<<acc__no<<"\t"<<balance<<endl;
}
void bank::input(){
    cout<<"enter bank details"<<endl;
    cout<<"Account holder name"<<"\t";
    cin>>name;
    cout<<"Account number"<<"\t";
    cin>>acc__no;
    cout<<"Account type"<<"\t";
    cin>>type__acc;
}
void bank::deposit(){
    int amt__dep;
    cout<<"Enter amount to be deposited";
    cin>>amt__dep;
    balance=balance+amt__dep;
    cout<<"Current balance"<<"\t"<<balance;
}
void bank::withdrawl(){
    int amt__wth;
    cout<<"Enter amount to withdrawl"<<endl;
    cin>>amt__wth;
    balance=balance-amt__wth;
    cout<<"Current balance"<<"\t"<<balance<<endl;
}
int main() {
    bank b1;
    int ch;char choice,yes;
    do{
        cout<<"Enter no of case to perform"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                b1.input();
                break;
            case 2:
                b1.deposit();
                break;
            case 3:
                b1.withdrawl();
                break;
            case 4:
                b1.display();
                break;
        }
        cout<<"Do you want to continue YES/NO"<<endl;
        cin>>choice;
    }while (choice==yes);
    return 0;
}
