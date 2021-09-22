#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите стороны прямоугольника:" << endl;
	cin >> a >> b;
	cout << "Площадь прямоугольника: " << a * b << endl << "Периметр прямоугольника: " << 2 * (a + b);
}