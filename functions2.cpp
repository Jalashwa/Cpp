#include<iostream>
#include<string>

void calculations(int x);

using namespace std;

int main ()
{
calculations(6);

int x=7;
calculations(x+1);
return 0;
}

void calculations(int x)
{
cout<<"The output of the program is "<<x<<endl; 
}



