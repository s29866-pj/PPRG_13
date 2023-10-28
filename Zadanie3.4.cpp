#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int rzedy, i, j, puste, licznik = 1;
    cout << "Podaj ile linijek: ";
    cin >> rzedy;
    
    for (i = 0; i < rzedy; i++) {
        for (puste = 1; puste <= rzedy - i; puste++) {
            cout << " ";
        }
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                licznik = 1;
            else
                licznik = licznik * (i - j + 1) / j;
            cout << licznik << " ";
        }
        cout << "\n";
    }
    return 0;
}