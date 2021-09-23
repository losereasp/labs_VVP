#include <iostream>
#include <cmath>

using namespace std;

float distance(float x1, float y1, float x2, float y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //Функция просчета расстояния между точками
}

int main() {
	float x1, y1, x2, y2, x3, y3, p;//Объявлем переменнные
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;//Вводим координаты
	p = (distance(x1, y1, x2, y2) + distance(x1, y1, x3, y3) + distance(x3, y3, x2, y2)) / 2;//Полупериметр
	cout << "P = " << distance(x1, y1, x2, y2) + distance(x1, y1, x3, y3) + distance(x3, y3, x2, y2) << endl;//Периметр
	cout << "S = " << sqrt(p * (p - distance(x1, y1, x2, y2)) * (p - distance(x1, y1, x3, y3)) * (p - distance(x3, y3, x2, y2)));//Площадь по формуле герона
}
