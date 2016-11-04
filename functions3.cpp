#include<iostream>

int testCall(int x,int y);
double testCall(double x,double y);

using namespace std;

int main ()
{
double a,b,c;
cout<<"Enter the first number  :"<<endl;
cin >>a;
cout<<"Enter the second number :"<<endl;
cin >>b;

c=testCall(a,b);
c=testCall(a,b);
cout<<"The output of the system is "<<c<<endl;

return 0;
}

int testCall(int x,int y)
{
return x+y;
}

double testCall(double x,double y)
{
return x+y;
}
