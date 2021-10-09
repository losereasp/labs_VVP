#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите номер года:";
    cin >> n;
    cout << "Это год ";

    switch (n % 10) {
    case 0:
    case 1:
        cout << "бел";
        break;
    case 2:
    case 3:
        cout << "черн";
        break;
    case 4:
    case 5:
        cout << "зелён";
        break;
    case 6:
    case 7:
        cout << "красн";
        break;
    case 8:
    case 9:
        cout << "жёлт";
        break;
    }

    switch (n % 12) {
    case 0:
        cout << "ой обезьны\n";
        break;
    case 1:
        cout << "ого петуха\n";
        break;
    case 2:
        cout << "ой собаки\n";
        break;
    case 3:
        cout << "ой свиньи\n";
        break;
    case 4:
        cout << "ой крысы\n";
        break;
    case 5:
        cout << "ого быка\n";
        break;
    case 6:
        cout << "ого тигра\n";
        break;
    case 7:
        cout << "ого кролика\n";
        break;
    case 8:
        cout << "ого дракона\n";
        break;
    case 9:
        cout << "ой змеи\n";
        break;
    case 10:
        cout << "ой лошади\n";
        break;
    case 11:
        cout << "ой овцы\n";
        break;
    }
}
