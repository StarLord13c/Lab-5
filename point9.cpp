#include <iostream>
#include <Windows.h>
using namespace std;

// 9. Напишіть прототип функції з ім'ям Perimeter(), яка повертає довге беззнакове ціле і приймає два параметри типу int.

unsigned long Perimeter(int length, int width) 
{
    unsigned long perimeter = 2 * (length + width); // обчислюємо периметр прямокутника за формулою P = 2 * (a + b), де a і b - сторони прямокутника.
    return perimeter;
}

void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int side1 = 6; // Довжина прямокутника
    int side2 = 7;  // Ширина прямокутника

    unsigned long result = Perimeter(side1, side2);

    cout << "Периметр прямокутника з довжиною " << side1 << " і шириною " << side2 << " дорівнює " << result << endl;
}
