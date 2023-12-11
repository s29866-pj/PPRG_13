#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int size;

    std::cout << "Podaj rozmiar tablicy (liczba calkowita parzysta): ";
    std::cin >> size;

    if (size <= 0 || size % 2 != 0) {
        std::cout << "Rozmiar tablicy musi byc dodatni i parzysty." << std::endl;
        return 1;
    }

    std::vector<int> array(size);

    std::cout << "Podaj elementy tablicy:" << std::endl;
    for (int i = 0; i < size; ++i)
        std::cin >> array[i];

    std::reverse(array.begin(), array.end());

    std::cout << "Tablica po zamianie miejscami:" << std::endl;
    for (const auto& element : array)
        std::cout << element << " ";

    return 0;
}
