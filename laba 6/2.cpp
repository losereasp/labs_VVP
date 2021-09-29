#include <iostream>

using namespace std;

int main() {
	int k;//Объявляем переменную
	cout << "enter number of the day:" << endl;
	cin >> k;//Вводим день года
	cout << "number of the day of week:" << endl;
	cout << k % 7;//Выводим день недели
}