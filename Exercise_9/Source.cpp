#include<iostream>
#include"Bank.h"
using namespace std;
int main()
{
	Customer C1,C2,C3;
	C1.ReadInfo();
	C2.ReadInfo();
	C3.ReadInfo();
	char n[] = "Bank 1";
	Bank B1(n);
	B1.openAccount(&C1, 5000);
	B1.openAccount(&C2, 8000);
	B1.openAccount(&C3, 12000);
	B1.printInfo();
	cout << "Number of Accounts with Balance Greater than 6000 equals " << B1.countAccountsGreater(6000) << endl;
	B1.closeAccount(2);
	B1.printInfo();
	B1.closeAccount(3);
	B1.printInfo();
	return 0;
}