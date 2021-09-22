#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите два ненулевых числа: ";
	cin >> a >> b;
	cout << "Сумма их модулей: " << abs(a) + abs(b) << endl << "Разность их модулей: " << abs(a) - abs(b) << endl;
	cout << "Произведение их модулей: " << abs(a) * abs(b) << endl << "Частное их модулей: " << abs(a) / abs(b);
}