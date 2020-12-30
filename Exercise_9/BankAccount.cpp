#include "BankAccount.h"
#include<iostream>
using namespace std;

BankAccount::BankAccount(int LastId,Customer* c, double balance)
{
	Id = LastId++;
	customer = c;
	Balance = balance;
	cout << "BankAccount is opened for customer : " << customer->GetName() << endl;
}
void BankAccount::SetBalance(double balance)
{
	Balance = balance;
}
int BankAccount::GetId() const
{
	return Id;
}
Customer* BankAccount::GetCustomer() const
{
	return customer;
}
double BankAccount::GetBalance() const
{
	return Balance;
}
void BankAccount::PrintInfo() const
{
	customer->PrintInfo();
	cout << "Balance equals " << Balance << endl;
}
BankAccount::~BankAccount()
{
	cout << "BankAccount is closed." << endl;
}