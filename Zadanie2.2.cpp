// Zadanie2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Podaj liczbe a: \n";
	cin >> a;

	// A
	for (int i = 0; i < a; i++) {
		cout << "*";
	}

	cout << endl;

	cout << "Podaj liczbe b: \n";
	cin >> b;

	// B
	for (int i = 0; i < b; i++) {
		cout << "*";
	}

	cout << endl;

	// C
	for (int i = 0; i <= a; i++) {

		for (int j = 0; j <= b; j++) {
			cout << "*";
		}
		cout << endl;
	};

	cout << endl;

	// D
	for (int i = 0; i <= a - 1; i++) {
		cout << "*";
	}
	cout << endl;

	for (int i = 0; i < b -2; i++){
		cout << "*";
		for (int j = 0; j < a - 2; j++) {
			cout << " ";
		}
		cout << "*\n";
	};
	cout << "*";
	for (int i = 0; i < b - 2; i++) {
		cout << "*";
	}
	cout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
