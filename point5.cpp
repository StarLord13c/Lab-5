#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

// 5. Напишіть програму, яка визначає більше трьох випадкових чисел.

void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(0));

    int num1 = rand();
    int num2 = rand();
    int num3 = rand();

    cout << "Числа: " << num1 << ", " << num2 << ", " << num3 << endl;

    int max = num1;
    if (num2 > max) 
    {
        max = num2;
    }
    if (num3 > max) 
    {
        max = num3;
    }

    cout << "Найбільше число: " << max << endl;
}
