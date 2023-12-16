using namespace std;
#include <cstdlib>
#include <iostream>


int main()
{
    int n;
    cout << "Podaj liczbe n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 3 != 0) {
            cout << i << " ";
        }
    }

    return 0;
}