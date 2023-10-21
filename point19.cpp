#include <iostream>
#include <Windows.h>
using namespace std;

// 19. Напишіть три перевантажені функції з двома параметрами різних типів, що повертають істину, якщо значення параметрів дорівнюють.

bool AreEqual(int a, int b) // перевантажена функція для порівняння двох цілих чисел
{
    return a == b;
}
bool AreEqual(double a, double b) // перевантажена функція для порівняння двох дійсних чисел
{
    return a == b;
}
bool AreEqual(const string &a, const string &b) // перевантажена функція для порівняння двох рядків
{
    return a == b;
}

void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int intNum1 = 13, intNum2 = 13;
    double doubleNum1 = 9.12, doubleNum2 = 4.12;
    string str1 = "Vlad", str2 = "Olena";

    bool result1 = AreEqual(intNum1, intNum2);
    bool result2 = AreEqual(doubleNum1, doubleNum2);
    bool result3 = AreEqual(str1, str2);

    cout << "Числа intA однакові: " << result1 << endl;
    cout << "Числа double однакові: " << result2 << endl;
    cout << "Рядки str однакові: " << result3 << endl;
}
