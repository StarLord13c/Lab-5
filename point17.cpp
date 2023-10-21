#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

// 17. Перепишіть п.8, застосувавши механізм С++ передачі параметрів за посиланням.

void GetAddressData(string &city, string &district, string &street, string &house, string &apartment) 
{
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
}

void main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string city = "";
    string district = "";
    string street = "";
    string house = "";
    string apartment = "";

    GetAddressData(city, district, street, house, apartment);

    string fullAddress = city + ", " + district + ", " + street + " " + house + ", кв. " + apartment;
    int cityLength = city.length();
    int districtLength = district.length();
    int fullAddressLength = fullAddress.length();
    string largeString = (cityLength > districtLength) ? "місто" : "район";

    cout << "\nВаша адреса: " << fullAddress << endl;
    cout << "Довжина міста: " << cityLength << " символів" << endl;
    cout << "Довжина району: " << districtLength << " символів" << endl;
    cout << "Довжина всієї адреси: " << fullAddressLength << " символів" << endl;
    cout << "Більший рядок: " << largeString << endl;
}
