#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    double solOne, solTwo, solThree;
    double delta, sqDelta;

    cout << "ax^2 + bx + c";
    cout << endl;
    cout << "Podaj 3 liczby po spacji. \n";
    cin >> a >> b >> c;

    cout << a << "x^2 + " << b << "x" << " + " << c;
    cout << endl;

    delta = (b * b) - 4 * a * c;
    sqDelta = sqrt(delta);
    

    if (delta > 0) {
        cout << "Ma dwa rozwiazania. \n";
        solOne = (-b - sqDelta) / 2 * a;
        solTwo = (-b + sqDelta) / 2 * a;

        cout << "1 rozwiazanie: " << solOne << endl;
        cout << "2 rozwiazanie: " << solTwo;
    }
    else if (delta == 0) {
        cout << "Ma 1 rozwiazanie. \n";
        solThree = -b / (2 * a);

        cout << "Rozwiazanie: " << solThree;
    }
    else {
        cout << "Nie ma rozwiazan.";
    }


}

