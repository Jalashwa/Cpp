#include<iostream>
int arithmeticOperation(int x,int y,int z);
using namespace std;

int main ()
{
int a,b,c,d;

cout << "Enter the first number "<< endl;
cin >> a;
cout << "Enter the second number "<<endl;
cin >> b;
cout << "Enter the third number "<<endl;
cin >> c;
d=arithmeticOperation(a,b,c);
cout << "The end result is "<<d<<endl;

return 0;

}


int arithmeticOperation(int x,int y,int z)
{
int e;
e = x+y-z;
return e;
}
