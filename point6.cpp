#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;

// 6. Введіть з клавіатури число буфер програми - рядок С - стилю. Перетворіть рядок на ціле, довге і речове. Виведіть номери на екран.

void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    char xb[100];
    cout << "Введіть рядок: ";
    cin >> xb;

    int int_value = atoi(xb); // функція для конвертування рядка у ціле число
    long long_value = atol(xb); // конвертує рядок у довге ціле число
    double double_value = atof(xb); // функція для конвертування рядка у число з рухомою комою

    cout << "Ціле число: " << int_value << endl;
    cout << "Довге число: " << long_value << endl;
    cout << "Дробове число: " << double_value << endl;
}
