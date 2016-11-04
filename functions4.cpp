#include<iostream>
using namespace std;

int add(int x,int y=10)
{
cout<< x+y<<endl;
}

double add(double x,double y)
{
cout<< x+y<<endl;
}

int main ()
{

add(3);
add(3,4);
add(3.05,4.05);
return 0;
}

