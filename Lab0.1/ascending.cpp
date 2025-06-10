//Name: Anyshya Hemphill
//Program 1 – Numbers
// This program sorts through an array of integers and orders them from smallest to largest.
#include <iostream>
using namespace std;

int main() {
	int valA, valB, valC, valD; // Declare four integer values
	int temp; 

	cout << "Please enter four integers:" << endl;
	cout << "Value A: ";
	cin >> valA;
	cout << "Value B: ";
	cin >> valB;
	cout << "Value C: ";
	cin >> valC;
	cout << "Value D: ";
	cin >> valD;

	// Sort in Ascending Order

	// First iteration
	if (valA > valB) {
		temp = valA;
		valA = valB;
		valB = temp;
	}
	if (valB > valC) {
		temp = valB;
		valB = valC;
		valC = temp;
	}
	if (valC > valD) {
		temp = valC;
		valC = valD;
		valD = temp;
	}

	// Second iteration
	if (valA > valB) {
		temp = valA;
		valA = valB;
		valB = temp;
	}
	if (valB > valC) {
		temp = valB;
		valB = valC;
		valC = temp;
	}

	// Third iteration
	if (valA > valB) {
		temp = valA;
		valA = valB;
		valB = temp;
	}

	// Output the sorted array
	cout << "\nSorted values in ascending order: ";
	cout << valA << ", " << valB << ", " << valC << ", " << valD;

	return 0;
}
