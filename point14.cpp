#include <iostream>
#include <Windows.h>
#include <cctype>
using namespace std;

// 14. Напишіть і перевірте функцію, що повертає істину, якщо з клавіатури введені символи 'Y', 'y', 'д', 'Д' і брехня інакше.

bool checking()
{
    char response;
    cout << "Введіть символ: ";
    cin >> response;

    response = tolower(response); // Перетворюємо введений символ в нижній регістр

    return (response == 'y' || response == 'д');
}

void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    if (checking())
    {
        cout << "Ви ввели 'Y', 'y', 'д' або 'Д'." << endl;
    }
    else 
    {
        cout << "Ви ввели інший символ." << endl;
    }
}
