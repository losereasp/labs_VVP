#include <iostream>

using namespace std;

int main() {
	int k;//Объявляем переменную
	cout << "enter number of the day:" << endl;
	cin >> k;//Вводим день года
	cout << "number of the day of week:" << endl;
	k %= 7;
	if (k == 0) {
		cout << k <<" - sunday";
	}
	if (k == 1) {
		cout << k << " - monday";
	}
	if (k == 2) {
		cout << k << " - tuesday";
	}
	if (k == 3) {
		cout << k << " - wednesday";
	}
	if (k == 4) {
		cout << k << " - thursday";
	}
	if (k == 5) {
		cout << k << " - friday";
	}
	if (k == 6) {
		cout << k << " - saturday";
	}
}
