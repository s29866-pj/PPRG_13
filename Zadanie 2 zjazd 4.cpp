
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    cout << "Podaj dlugosc tablicy: ";
    int x, j;
    cin >> x;

    int arr[10000], i, elem;
    cout << "Podaj liczby (numer liczb musi byc taki sam jak dlugosc tablicy: ";
    for (i = 0; i < x - 1; i++)
        cin >> arr[i];
    cin >> elem;
    arr[i] = elem;
    cout << endl;
    for (i = 0; i < x; i++) {
        cout << arr[i] << " ";
    }


    cout << endl;

    cout << "Dublicate Values are: ";
    for (i = 0; i < x; i++)
    {
        for (j = i + 1; j < x; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "\n" << arr[i];
            }
        }
    }
    getch();
}

