#include <iostream>

using namespace std;

int main() {
	int x, a, y;//Объявляем переменные
	cout << "enter kg of sweets and their cost:" << endl;
	cin >> x >> a;//Вводим х кг а рублей и у кг
	cout << "1 kg price: " << a / x << endl;//Выводим стоимость 1 кг
	cout << "enter the weight of the same candies" << endl;
	cin >> y;
	cout << y << " kg price: " << y * (a / x);//Выводим стоимость у кг
}