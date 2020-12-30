#include "Bank.h"
#include<iostream>
using namespace std;
Bank::Bank(char* n)
{
	name = n;
	num = 0;
	LastId = 1;
	cout << "Bank is Constructed" << endl;
}
Bank::~Bank()
{
	for (int i = 0;i < num;i++) 
	{
		delete accounts[i];
	}
	cout << "Bank is Destructed" << endl;
}
void Bank::setName(char* n)
{
	name = n;
}
char* Bank::getName() const
{
	return name;
}
void Bank::openAccount(Customer* c, double balance)
{
	if (num == 100000)
	{
		return;
	}
	accounts[num] = new BankAccount(LastId, c, balance);
	LastId++;
	num++;
}
void Bank::closeAccount(int id)
{
	for (int i = 0;i < num;i++)
	{
		if (accounts[i]->GetId() == id)
		{
			delete accounts[i];
			accounts[i] = accounts[num - 1];
			num--;
			return;
		}
	}
}
int Bank::countAccountsGreater(double balance)
{
	int count = 0;
	for (int i = 0;i < num;i++)
	{
		if (accounts[i]->GetBalance() > balance)
		{
			count++;
		}
	}
	return count;
}
void Bank::printInfo() const
{
	cout << "Bank Name is " << name << endl;
	cout << "Number of Accounts equals " << num << endl;
	for (int i = 0; i < num; i++)
	{
		accounts[i]->PrintInfo();
	}
}