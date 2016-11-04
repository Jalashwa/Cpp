#include <iostream>
using namespace std;

class Student
{
private:
int roll;
int age;
public:
Student() : roll(10),age(10)
{}

void showData()
{
cout <<roll<<endl;
cout <<age<<endl;
}

};

int main ()
{
Student S1;
S1.showData();
return 0;
}

