#include <iostream>

using namespace std;

int main() {
	int k, n;//Объявляем переменные
	cout << "enter a number of the day and number first january:" << endl;
	cin >> k >> n;//Вводим день года и день когда было 1 января
	cout << "number of the day of week: " << endl;
	if (((k + n) % 7) - 1 == 0) {//Проверка на то что этот день воскресенье
		cout << 7;
	}
	else cout << ((k + n) % 7) - 1;//Вывод если это не воскресенье
}
