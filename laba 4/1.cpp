#include <iostream>

using namespace std;

int main() {
	int a;//Объявляем переменную а
	cout << "enter the angle value 0 < a < 360:" << endl;
	cin >> a;//Вводим значение градусов
	cout << a << " grade = " << (3.14 / 180) * a << " rad";//Выводим радианы
}
