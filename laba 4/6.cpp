#include <iostream>

using namespace std;

int main() {
	int a1, b1, c1, a2, b2, c2;//Объявляем перменные
	cout << "enter coefficient: " << endl;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;//Вводим коэффициенты
	int x = (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);//Вычисляем х
	int y = (c1 - a1 * x) / b1;//Вычисляем у
	cout << "x = " << x << " y = " << y;
}