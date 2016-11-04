#include<iostream>
#include<string>

using namespace std;

class firstClass
{
private: 

int inputNumber;

public:

void getData(int intermediate)
{
inputNumber = intermediate;
}

void showData()
{
cout <<"The data entered is "<<inputNumber<<endl; 
}
};

int main ()
{
firstClass a,b;
a.getData(100);
b.getData(101);

a.showData();
b.showData();

return 0;
}

