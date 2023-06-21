#include <iostream>

int main() {
    int hours, minutes, seconds;

    std::cout << "Введіть поточний час (години, хвилини, секунди): ";
    std::cin >> hours >> minutes >> seconds;

    if (hours >= 0 && hours <= 23 && minutes >= 0 && minutes <= 59 && seconds >= 0 && seconds <= 59) {
        std::cout << "Час коректний." << std::endl;
    }
    else {
        std::cout << "Час некоректний." << std::endl;
    }

    return 0;
}
