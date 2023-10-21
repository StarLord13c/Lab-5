#include <iostream>
#include <Windows.h>
using namespace std;

// 16.	Напишіть та перевірте роботу void-функції для подвоювання числа за допомогою механізму передачі параметрів за значенням. Перевірте неправильність роботи.

void DoubleValue(int num) 
{
    num *= 2;
}
void DoubleValue2(int &num) // додаємо посилання
{
    num *= 2;
}

void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int x = 5;
    cout << "Початкове значення: " << x << endl;
    DoubleValue(x);
    cout << "Після виклику функції: " << x << endl;
    int y = 3;
    cout << "\nПочаткове значення: " << y << endl;
    DoubleValue2(y);
    cout << "Після виклику функції: " << y << endl;
}
