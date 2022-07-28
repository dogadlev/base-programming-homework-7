// Homework 7. Task 1.

#include <iostream>
#include <clocale>

#define MODE 1

#ifndef MODE
#error Ошибка! Необходимо определить MODE.
#endif

#if MODE == 1
int add(int num1, int num2)
{
    return (num1 + num2);
}
#endif

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
#if MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    int num1 = 0;
    std::cout << "Введите число 2: ";
    std::cin >> num1;
    int num2 = 0;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
    std::cout << "Результат сложения: " << add(num1, num2) << std::endl;
#else
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
return 0;
}