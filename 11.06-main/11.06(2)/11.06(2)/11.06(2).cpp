#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double number;

    std::cout << "Введіть число: ";
    std::cin >> number;

    if (static_cast<int>(number) != number) {
        std::cout << "Число має дробову частину." << std::endl;
    }
    else {
        std::cout << "Число не має дробової частини." << std::endl;
    }

    return 0;
}
