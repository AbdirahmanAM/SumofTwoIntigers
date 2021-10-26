// SumofTwoIntigers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, sum;
	cout << "Sum of two intigers input by the user:\n";
	cout << ".......................................\n\n";
	cout << "Please input first number: ";
	cin >> num1;
	cout << "\n";
	cout << "Please input second number: \n";
	cin >> num2;
	cout << "\n";
	sum = num1 + num2;
	cout << "Sum of the two numbets is: " << sum;
	cout << "\n";

	return 0;

}