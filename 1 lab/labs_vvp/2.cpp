#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int d;
	cout << "¬ведите диаметр окружности: ";
	cin >> d;
	cout << "ƒлина окружности: " << 3.14 * d << endl;
}