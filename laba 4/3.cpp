#include <iostream>

using namespace std;

int main() {
	int x, a, y;//Объявляем переменные
	cout << "enter kg, rub, kg:" << endl;
	cin >> x >> a >> y;//Вводим х кг а рублей и у кг
	cout << "1 kg price: " << a / x << endl;//Выводим стоимость 1 кг
	cout << y << " kg price: " << y * (a / x);//Выводим стоимость у кг
}