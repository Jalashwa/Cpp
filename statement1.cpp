#include<iostream>

using namespace std;

class Account
{
private:
int accountNumber;
double balance;
public:
Account(int no,double b=0):accountNumber(no),balance(b)
{}

int getAccountNumber()
{
return accountNumber;
}
double getBalance()
{
return balance;
}

void setBalance(double b)
{
balance = b;
}
int credit(double mnDeposit)
{
balance+=mnDeposit;
}

int debit(double mnCredit)
{
if (mnCredit<=balance)
{
balance-=mnCredit;
}
else 
{
cout<<"Credit Money is more than the Balance"<<endl;
cout<<"Transaction not possible"<<endl;
}
}

void printData()
{
cout<<"The Account Number of the Customer is :"<<accountNumber<<endl;
cout<<"The Balance in the account is :"<<balance<<endl;
}

};

int main()
{
Account First(22334,1000);
First.printData();
First.credit(200);
First.printData();

Account Second(224);
Second.printData();

return 0;
}


