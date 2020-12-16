#include"ImageRow.h"
#include<iostream>
using namespace std;
int main()
{
	ImageRow R1(4);
	R1.ReadPixels();
	R1.PrintInfo();
	cout << "Number of blue pixels " << R1.CountBlues() << endl;
	cout << "Number of blue pixels converted " << R1.ConvertBluesToReds() << endl;
	R1.PrintInfo();
	cout << "Number of blue pixels " << R1.CountBlues() << endl;
	R1.InvertAll();
	R1.PrintInfo();
	cout << "Number of blue pixels " << R1.CountBlues() << endl;
	return 0;
}