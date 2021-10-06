#include <iostream>

using namespace std;

int main() {
	int a, b;//Объявляем переменные
	cout << "enter a and b in the inequality a > 2 and b <= 3:" << endl;
	cin >> a >> b;//Вводим числа
	bool x = a > 2 and b <= 3;//Проверяем тру фолз
	cout << a << " > 2 and " << b << " <= 3 its " << boolalpha << x;//Вывод тру фолз
}