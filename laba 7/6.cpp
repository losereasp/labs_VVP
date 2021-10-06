#include <iostream>

using namespace std;

int main() {
	int a, b, c;//Объявляем переменные
	cout << "enter sides of the triangle:" << endl;
	cin >> a >> b >> c;//Вводим стороны треугольника
	bool x = pow(a, 2) + pow(b, 2) == pow(c, 2) or pow(a, 2) + pow(c, 2) == pow(b, 2) or pow(b, 2) + pow(c, 2) == pow(a, 2);//Проверяем тру фолз
	cout << "a triangle with sides a, b, c is rectangular - ";
	cout << '*' << boolalpha << x << '*';//Вывод тру фолз
}