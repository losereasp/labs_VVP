#include <iostream>

using namespace std;

int main() {
	int a;//Объявляем переменную
	cout << "enter rad value 0 < a < 2 * pi:" << endl;
	cin >> a;//Вводим радианы
	cout << a << " rad = " << a * (180 / 3.14) << " grade";//Выводим градусы
}