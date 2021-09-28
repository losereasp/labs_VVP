#include <iostream>

using namespace std;

int main() {
	int a, b;//Объявление переменных
	cout << "enter segment a and segment b (a > b):" << endl;
	cin >> a >> b;//Ввод отрезка а и б
	cout << "segments b placed on segment a:" << endl;
	cout << a / b;//Вывод сколько отрезков б поместится на а
}