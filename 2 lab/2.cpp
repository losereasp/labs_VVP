#include <iostream>

using namespace std;

int main() {
	int a, b, c;//Объявление перменных
	cin >> a >> b >> c;//Ввод точек на оси
	cout << "AC = " << abs(c - a) << endl << "BC = " << abs(c - b) << endl << "SUM = " << abs(c - a) + abs(c - b);//Вывод длины отрезков АС и ВС
}