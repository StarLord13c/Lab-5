#include <iostream>
#include <Windows.h>
using namespace std;

// 12. Напишіть функцію, яка повертає приватне від поділу двох цілих чисел. Якщо друге число 0, то ділення не виконуйте та поверніть –1.

int Divide(int num1, int num2) 
{
    if (num2 == 0) 
    {
        return -1; // Повертаємо -1, якщо дільник рівний 0.
    } 
    else 
    {
        return num1 / num2; // Виконуємо ділення і повертаємо результат.
    }
}

void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int result = Divide(10, 2);
    cout << "Результат: " << result << endl;
    result = Divide(8, 0); // Дільник рівний 0, отже, повернеться -1
    cout << "Результат: " << result << endl;
}
