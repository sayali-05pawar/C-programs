//Conversion of gallons into cubic feet
#include<iostream>
using namespace  std;
int main()
{
      float gallon;
      double cufeet;
      cout<<"Enter number of gallons: ";
      cin>>gallon;
      cufeet=(gallon/7.481);
      cout<<cufeet;
      return 0;
}
