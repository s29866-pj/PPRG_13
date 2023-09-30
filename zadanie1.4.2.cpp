#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Podaj 3 liczby \n";
    cin >> x;
    cin >> y;
    cin >> z;

    int temp, wynik;

    temp = x > y ? x : y;

    wynik = temp > z ? temp : z;
;

    cout << wynik << " jest najwieksza";


    return 0;
}
