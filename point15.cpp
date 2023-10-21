#include <iostream>
#include <Windows.h>
#include <cctype>
using namespace std;

// 15. Напишіть та перевірте inline – функцію, що повертає числове значення переданого їй символу.

inline int SyminNum(char x) 
{
    return (x); // просто повертає числове значення символу, яке відповідає ASCII-коду цього символу
}

void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char symbol = 'V';
    int num = SyminNum(symbol);

    cout << "Числове значення символу '" << symbol << "' - " << num << endl;
}
