#include <iostream>
using namespace std;

int main()
{
	float x, y, suma, roznica, iloczyn, iloraz;

	cout << "Podaj 2 liczby po spacji: " << endl;
	cin >> x >> y;

	cout << endl;

	suma = x + y;
	printf("%.2f", suma);

	cout << endl;

	roznica = x - y;
	printf("%.2f", roznica);

	cout << endl;

	iloczyn = x * y;
	printf("%.2f", iloczyn);

	cout << endl;

	iloraz = x / y;
	printf("%.2f", iloraz);
}

