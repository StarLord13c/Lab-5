#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

// 1. Обчислити коріння квадратного рівняння виду ax2 + bx + c = 0 за формулою.

void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double a, b, c;
    cout << "Введіть коефіцієнти a, b і c: ";
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) 
    {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Корені рівняння: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (discriminant == 0) 
    {
        double x1 = -b / (2 * a);
        cout << "Рівняння має один корінь: x1 = " << x1 << endl;
    }
    else 
    {
        cout << "Рівняння не має дійсних коренів." << endl;
    }
}
