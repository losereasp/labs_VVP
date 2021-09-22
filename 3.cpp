#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите два числа: ";
	cin >> a >> b;
	cout << "Среднее арифметическое этих чисел: " << (a + b) / 2;
}