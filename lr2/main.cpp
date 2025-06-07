#include <iostream>
#include "four.hpp"

void printFour(const std::string& label, const Four& number) {
    std::cout << label << ": " << number << " (base-4)" << std::endl;
}

int main() {
    Four num1{1, 2, 3};
    Four num2{3, 2, 1};

    printFour("num1", num1);
    printFour("num2", num2);

    printFour("num1 + num2", num1 + num2);
    printFour("num2 - num1", num2 - num1);

    std::cout << "num1 == num2: " << (num1 == num2 ? "true" : "false") << std::endl;
    std::cout << "num1 < num2: " << (num1 < num2 ? "true" : "false") << std::endl;
    std::cout << "num2 > num1: " << (num2 > num1 ? "true" : "false") << std::endl;


    Four copy = num1;
    printFour("copy of num1", copy);

    Four moved = std::move(num2);
    printFour("moved num2", moved);
    printFour("num2 после перемещения", num2);

    // Пример ввода
    std::cout << "Введите число в 4-ричной системе для num1: ";
    std::cin >> num1;
    printFour("num1 после ввода", num1);

    return 0;
}
