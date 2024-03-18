#include <iostream>
using namespace std;

class sample
{
    int a,l,b,h,r;
    int res;
    public:
    void area(int t);
    void area(int x,int y);
    void area(int u ,int v,int w);
};
void sample :: area(int t)
{
    a=t;
    res = t*t;
    cout<<"Area of the square is "<<res<<endl;
}
void sample :: area(int x,int y)
{
  r=x;
  h=y;
  res = 3.14*x*x*y;
  cout<<"Area of the circle is "<<res<<endl;
}
void sample :: area(int u ,int v,int w)
{
    l=u;
    b=v;
    h=w;
    res = u*v*w;
    cout<<"Area of the rectangle is "<<res<<endl;
}
int main()
{
    sample s1;
    s1.area(3);
    s1.area(4,5);
    s1.area(2,3,4);
    return 0;
}
