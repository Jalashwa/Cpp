#include<iostream>
using namespace std;

class Student
{
private:
char name;
int roll_num;
int total_mark;

public:
Student(char n,int r,int m):name(name),roll_num(r),total_mark(m)
{}

char getName()
{
return name;
}

int getRoll()
{
return roll_num;
}

int getMark()
{
return total_mark;
}

void setName(char n)
{
name=n;
}

void setRoll(int r)
{
roll_num=r;
}

void setMark(int m)
{
total_mark=m;
}

void displayData()
{
cout<<"The name of the student is "<<name<<endl;
cout<<"The roll number of the student is "<<roll_num<<endl;
cout<<"The mark of the student is "<<total_mark<<endl;
}
};

int main()
{
Student S1('sagnik',79,85);
S1.displayData();

return 0;
}


