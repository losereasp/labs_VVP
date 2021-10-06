#include <iostream>

using namespace std;

int main() {
	int a, b, c;//Объявляем переменные
	cout << "enter sides of the triangle:" << endl;
	cin >> a >> b >> c;//Вводим стороны треугольника
	bool x = a + b > c and a + c > b and b + c > a;//Проверяем тру фолз
	cout << "there is a triangle with sides a, b, c - ";
	cout << '*' << boolalpha << x << '*';//Вывод тру фолз
}