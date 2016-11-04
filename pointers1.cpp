#include<iostream>

using namespace std;

int main ()
{
int *ptr1;
cout <<"The value of pointer 1 is : "<<*ptr1<<endl;

ptr1=0;
cout <<"Now the null pointer 1 is : "<<ptr1<<endl;

int value=5;
int *ptr2=&value;
 
cout <<"The address of value is : "<<&value<<endl;
cout <<"The value inside pointer 3 is : "<<*ptr2<<endl;

int value2=7;
int *ptr3=&value2;
cout <<"The value2 variable is : "<<value2<<endl;
cout <<"The value of value 2 pointer is : "<<ptr3<<endl;


return 0;
}


