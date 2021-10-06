#include <iostream>

using namespace std;

int main() {
	int a, b, c;//Объявляем переменные
	cout << "enter a, b, c in the inequality a < b < c:" << endl;
	cin >> a >> b >> c;//Вводим числа
	bool x = (a < b) and (b < c);//Проверяем тру фолз
	cout << a << " < " << b << " < " << c << " its " << boolalpha << x;//Вывод тру фолз
}