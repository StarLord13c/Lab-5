#include <iostream>
#include <cctype>
#include <Windows.h>
using namespace std;

// 7. Реалізуйте набір особистих функцій tolowerR(ch), toupperR(ch), isalphaR(ch), islowerR(ch), isupperR(ch), isalnumR(ch) для роботи із символами російського алфавіту.

char tolowerR(char ch) // переведення символу в нижній регістр російської абетки
{
    if (ch >= 'А' && ch <= 'Я') 
    {
        return ch + 32; // Різниця між кодами 'А' та 'а' у таблиці ASCII
    }
    return ch;
}

char toupperR(char ch) // переведення символу в верхній регістр російської абетки
{
    if (ch >= 'а' && ch <= 'я') 
    {
        return ch - 32; // різниця між кодами 'а' та 'А' у таблиці ASCII
    }
    return ch;
}

bool isalphaR(char ch) // перевірка, чи є символ буквою російського алфавіту
{
    return (ch >= 'А' && ch <= 'Я') || (ch >= 'а' && ch <= 'я');
}

bool islowerR(char ch) // перевірка, чи є символ малою літерою російського алфавіту
{
    return (ch >= 'а' && ch <= 'я');
}

bool isupperR(char ch) // перевірка, чи є символ великою літерою російського алфавіту
{
    return (ch >= 'А' && ch <= 'Я');
}

bool isalnumR(char ch) // перевірка, чи є символ буквою або цифрою
{
    return isalphaR(ch) || (ch >= '0' && ch <= '9');
}

void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    char ch;
    cout << "Введіть символ: ";
    cin >> ch;

    cout << "tolowerR: " << tolowerR(ch) << endl;
    cout << "toupperR: " << toupperR(ch) << endl;
    cout << "isalphaR: " << isalphaR(ch) << endl;
    cout << "islowerR: " << islowerR(ch) << endl;
    cout << "isupperR: " << isupperR(ch) << endl;
    cout << "isalnumR: " << isalnumR(ch) << endl;
}
