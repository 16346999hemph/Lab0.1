//Name: Anyshya Hemphill
//Program 1 – Numbers
// This program finds the largest of 4 integers entered by the user.#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, large;
	char again = 'Y';
	while (again == 'Y') {
		cout << "Enter 4 integers: ";
		cin >> a >> b >> c>> d;
		large = a;
		if (b > large) {
			large = b;
		}
		if (c > large) {
			large = c;
		}
		if (d > large) {
			large = d;
		}
		cout << "The largest number is: " <<
			large;
		cout << " Again? ";
		cin >> again;
	}
	return 0;
}
