#include <iostream>

using namespace std;

int main() {
	int a;//Объявляем переменную
	cout << "enter two-digit number:" << endl;
	cin >> a;//Вводим 2-х значное число
	cout << "this number is the opposite:" << endl;
	cout << a % 10 << a / 10;//Выводим это число наоборот
}