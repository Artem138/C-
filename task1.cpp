#include <iostream>

int main() 
{
    setlocale(LC_ALL, "RU");

    int num1, num2;
    std::cout << "Введите первое целое число: ";
    std::cin >> num1;

    std::cout << "Введите второе целое число: ";
    std::cin >> num2;

    int sum = num1 + num2;
    std::cout << "Сумма " << num1 << " и " << num2 << " равна: " << sum << std::endl;

    int difference = num1 - num2;
    std::cout << "Разница между " << num1 << " и " << num2 << " равна: " << difference << std::endl;

    return 0;
}
