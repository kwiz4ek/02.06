#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int ticketNumber;

    std::cout << "Введіть шестизначний номер квитка (від 000000 до 999999): ";
    std::cin >> ticketNumber;

    int digit1 = ticketNumber / 100000;
    int digit2 = (ticketNumber / 10000) % 10;
    int digit3 = (ticketNumber / 1000) % 10;
    int digit4 = (ticketNumber / 100) % 10;
    int digit5 = (ticketNumber / 10) % 10;
    int digit6 = ticketNumber % 10;

    if ((digit1 + digit2 + digit3) == (digit4 + digit5 + digit6)) {
        std::cout << "Квиток є щасливим!" << std::endl;
    }
    else {
        std::cout << "Квиток не є щасливим." << std::endl;
    }

    return 0;
}
