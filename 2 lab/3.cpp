#include <iostream>

using namespace std;

int main() {
	int a, b, c;//Объявление переменных
	cin >> a >> b >> c;//Ввод точек
	cout << abs(c - a) * abs(c - b);//Вывод произведения ВС и АС
}