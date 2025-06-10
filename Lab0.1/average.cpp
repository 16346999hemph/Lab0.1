//Name: Anyshya Hemphill
//Program 1 – Numbers
// This program calciates the value of integer input given by the user.
#include <iostream>
using namespace std;


int main()
	{
		int a, b, c, d;
		int sum = 0;
		cout << "This is an average calculator. \n";
		cout << "Please enter 4 numbers:\n";
		cin >> a >> b >> c >> d;
		sum = a + b + c + d;
		cout << "Sum of the numbers: " << sum << endl;
		float avg = sum / static_cast<double>(4);
		cout << "Average of the  numbers: " << avg << endl;
		return 0;
	}
