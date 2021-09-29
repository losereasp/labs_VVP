#include <iostream>

using namespace std;

int main() {
	int a;//Объявляем переменную
	cout << "enter year:" << endl;
	cin >> a;//Вводим год
	cout << "number of century:" << endl;
	if (a % 100 > 0) {//Чтоб 2000 год был 20 веком
		cout << a / 100 + 1;
	}
	else cout << a / 100;//Если вводили не 2000 и подобные года
}