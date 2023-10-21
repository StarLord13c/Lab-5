#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;

/* 8. Оголосити символьні масиви для зберігання елементів своєї адреси(місто, район, вулиця, будинок, квартира) та всієї адреси.
 Проініціалізувати їх порожнім рядком.Визначити значення елементів адреси, виконавши надання рядків.
 Сформувати значення всієї адреси, виконавши конкатенацію рядків.
 Визначити довжину елементів адреси та всієї адреси. Визначте якийсь рядок більше: місто чи район, виконати порівняння рядків. */
 
void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    char city[50] = "";
    char district[50] = "";
    char street[50] = "";
    char house[50] = "";
    char apartment[50] = "";

    cout << "Введіть місто: ";
    cin >> city;
    cout << "Введіть район: ";
    cin >> district;
    cout << "Введіть вулицю: ";
    cin >> street;
    cout << "Введіть будинок: ";
    cin >> house;
    cout << "Введіть квартиру: ";
    cin >> apartment;

    // конкатенації рядків
    string fullAddress = string(city) + ", " + string(district) + ", " + string(street) + " " + string(house) + ", кв. " + string(apartment);

    // довжина елементів адреси та всієї адреси
    int cityLength = strlen(city);
    int districtLength = strlen(district);
    int fullAddressLength = fullAddress.length();

    // який рядок більше: місто чи район
    string largeString = (cityLength > districtLength) ? "місто" : "район";

    cout << "\nВаша адреса: " << fullAddress << endl;
    cout << "Довжина міста: " << cityLength << " символів" << endl;
    cout << "Довжина району: " << districtLength << " символів" << endl;
    cout << "Довжина всієї адреси: " << fullAddressLength << " символів" << endl;
    cout << "Більший рядок: " << largeString << endl;
}
