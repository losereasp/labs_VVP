#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите два ненулевых числа: ";
	cin >> a >> b;
	cout << "Сумма квадратов их модулей: " << pow(abs(a), 2) + pow(abs(b), 2) << endl << "Разность квадратов их модулей : " << pow(abs(a), 2) - pow(abs(b), 2) << endl;
	cout << "Произведение квадратов их модулей : " << pow(abs(a), 2) * pow(abs(b), 2) << endl << "Частное квадратов их модулей: " << pow(abs(a), 2) / pow(abs(b), 2);
}