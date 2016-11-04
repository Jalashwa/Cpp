#include<iostream>
#include<cmath>

using namespace std;

class Point
{
private:
int x;
int y;
public:
Point (int xco=0,int yco=0):x(xco),y(yco)
{}
/*
int getX()
{
return x;
}
int getY()
{
return y;
}

void setX(int xco)
{
x=xco;
}

void setY(int yco)
{
y=yco;
}
*/
void Display()
{
cout<<"The x co-ordinate is :"<<x<<endl;
}
double Magnitude()
{
double result;
result=sqrt(x*x + y*y);
cout<<"The Magnitude is : "<<result<<endl;
}
};

int main()
{
Point One(2,3);
One.Display();
One.Magnitude();

return 0;
}
