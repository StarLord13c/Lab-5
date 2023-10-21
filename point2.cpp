#include <iostream>
#include <cmath>
#include <Windows.h>
#include < math.h >
using namespace std;
#define M_PI 3.14159265358979323846

// 2. Обчислити третю сторону трикутника, якщо відомі дві інші та кут між ними у градусах за формулою.

void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double a, b, angle_degrees;
    cout << "Введіть довжини сторін a і b та кут у градусах: ";
    cin >> a >> b >> angle_degrees;

    double angle_radians = angle_degrees * M_PI / 180.0;

    double c = sqrt(a * a + b * b - 2 * a * b * cos(angle_radians));
    cout << "Довжина третьої сторони: c = " << c << endl;
}
