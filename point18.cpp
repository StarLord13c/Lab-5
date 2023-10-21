#include <iostream>
#include <Windows.h>
using namespace std;

// 18. Напишіть функцію для додавання двох чисел, що має одне значення за промовчанням.

int Summ(int a, int b = 5) // Функція для додавання двох чисел
{
    return a + b;
}

void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int num1 = 10;
    int num2 = 5;

    int sum1 = Summ(num1, num2);
    int sum2 = Summ(num1);

    cout << "Сума: " << sum1 << endl;
    cout << "Сума з числом за промовчанням: " << sum2 << endl;
}
