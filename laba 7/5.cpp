#include <iostream>

using namespace std;

int main() {
	int a;//Объявляем переменную
	cout << "enter fout digits number:" << endl;
	cin >> a;//Вводим число
	bool x = a / 1000 == a % 10 and a / 100 % 10 == a / 10 % 10;//Проверяем тру фолз
	cout << "this number is read the same from left to right and from right to left - ";
	cout << '*' << boolalpha << x << '*';//Вывод тру фолз
}