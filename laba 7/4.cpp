#include <iostream>

using namespace std;

int main() {
	int a;//Объявляем переменную
	cout << "enter three digit number:" << endl;
	cin >> a;//Вводим число
	bool x = a / 100 < a / 10 % 10 and a / 10 % 10 < a % 10;//Проверяем тру фолз
	cout << "the digits of this number form an ascending or descending sequence - ";
	cout << '*' << boolalpha << x << '*';//Вывод тру фолз
}