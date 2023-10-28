#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	char x;
	int y;
	cout << "Podawaj litery.";
	cin >> x;


	while (1) {

		x =_getch();
		y = x;
		if (y == 116)
			break;
		cout << y;
	}
}

