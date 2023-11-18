#include <iostream>

using namespace std;

int main() {
    const int rows = 10;
    const int cols = 10;
    int array[rows][cols];

    // Fill the first row with numbers from 0 to 9
    for (int i = 0; i < cols; ++i) {
        array[0][i] = i;
    }

    // Fill the second row with the sum of corresponding numbers from the first row
    for (int i = 0; i < cols; ++i) {
        array[1][i] = array[0][i] + array[0][i];
    }

    // Fill the third row with the squares of corresponding numbers from the first row
    for (int i = 0; i < cols; ++i) {
        array[2][i] = array[0][i] * array[0][i];
    }

    // Display the 2-dimensional array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
