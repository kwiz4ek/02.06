#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x1, y1, x2, y2;

    std::cout << "Введіть координати першої точки (x1, y1): ";
    std::cin >> x1 >> y1;

    std::cout << "Введіть координати другої точки (x2, y2): ";
    std::cin >> x2 >> y2;

    if (y1 == y2) {
        std::cout << "Пряма паралельна осі абсцис." << std::endl;
    }
    else if (x1 == x2) {
        std::cout << "Пряма паралельна осі ординат." << std::endl;
    }
    else {
        std::cout << "Пряма не паралельна жодній осі." << std::endl;
    }

    return 0;
}
