
#include <iostream>
using namespace std;

int main()
{
    cout << "Podaj dlugosc tablicy: ";
    int x; 
    cin >> x;

    int arr[10000], i, elem;
    cout << "Podaj liczby (numer liczb musi byc taki sam jak dlugosc tablicy: ";
    for (i = 0; i < x-1 ; i++)
        cin >> arr[i];
    cin >> elem;
    arr[i] = elem;
    cout << endl;
    for (i = 0; i < x; i++) {
        cout << arr[i] << " ";
        }

    cout << endl;

    for (i = 0; i < x; i++) {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }

    cout << endl << arr[0];
}

