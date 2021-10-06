#include <iostream>

using namespace std;

int main() {
	int x, y;//Объявляем переменные
	cout << "enter the coordinates of the point x and y:" << endl;
	cin >> x >> y;//Вводим координаты
	cout << "the number of the coordinate quarter: ";
	if (x > 0 and y > 0) cout << "I";//Проверяем + выводим
	else if (x > 0 and y < 0) cout << "IV";//Проверяем + выводим
	if (x < 0 and y > 0) cout << "II";//Проверяем + выводим
	else if (x < 0 and y < 0) cout << "III";//Проверяем + выводим
}