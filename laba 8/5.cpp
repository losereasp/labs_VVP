#include <iostream>

using namespace std;

int main() {
	int a;//Объявляем переменную
	cout << "enter integer: " << endl;
	cin >> a;//Вводим число
	if (a < 0 and a % 2 == 0) cout << "this is a negative even number";//Проверяем условие и выводим результат
	else if (a < 0 and a % 2 != 0) cout << "this is a negative odd number";//Проверяем условие и выводим результат
	if (a > 0 and a % 2 == 0) cout << "this is a positive even number";//Проверяем условие и выводим результат
	else if (a > 0 and a % 2 != 0) cout << "this is a positive odd number";//Проверяем условие и выводим результат
}