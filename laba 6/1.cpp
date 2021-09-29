#include <iostream>

using namespace std;

int main() {
	int sec;//Объявляем переменную
	cout << "enter seconds:" << endl;
	cin >> sec;//Вводим секунды
	cout << "count seconds from last minut:" << endl;
	cout << sec % 60;//Выводим кол-во секунд прошедших с ласт минуты
}