#include <iostream>

using namespace std;

int main() {
	int a;//Объявляем переменную
	cout << "enter positive integer:" << endl;
	cin >> a;//Вводим число
	bool x = a % 2 == 0 and a < 100 and a >= 10;//Проверяем тру фолз
	cout << "this number is an even two digit - ";
	cout << '*' << boolalpha << x << '*';//Вывод тру фолз
}