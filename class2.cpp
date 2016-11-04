#include<iostream>
using namespace std;

class Student
{
private:
int roll;
int age;
public:
Student(int rl, int ag) : roll(rl), age(ag) 
{}

void showData1()
{
cout <<"Roll number initial : "<<roll<<endl;
cout <<"Age initial : "<<age<<endl;
}

void getData()
{
cout <<"Enter the roll number : "<<endl;
cin >>roll;
cout <<"Enter the age : "<<endl;
cin >>age;
}

void showData2()
{
cout <<"Roll number final : "<<roll<<endl;
cout <<"Age final : "<<age<<endl;
}
};

int main()
{
Student S1(10,25);
S1.showData1();
S1.getData();
S1.showData2();
return 0;
}
