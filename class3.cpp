#include<iostream>

using namespace std;

class Student
{
private:
int roll;
int age;

public:
Student (int a, int b) : roll(a),age(b)
{}

void showData()
{
cout <<"The entered Roll Number is : "<<roll<<endl;
cout <<"The entered Age of the person is : "<<age<<endl;
}
};

int main()
{
int a, b;

cout <<"Enter the roll number  : "<<endl;
cin >> a;
cout <<"Enter the age : "<<endl;
cin >>b;
Student S1(a,b);
S1.showData();
return 0;
}

