#include <iostream>

using namespace std;

int main() {
	int a, b, c;//Объявляем переменные
	cout << "enter the size of rectangle:" << endl;
	cin >> a >> b;//Вводим размер прямоугольника А х В
	cout << "enter the size of square:" << endl;
	cin >> c;//Вводим сторону квадрата
	int A = a / c;
	int B = b / c;
	cout << "amount square: " << A * B << endl;//Кол-во квадратов
	cout << "area unoccupied area: ";
	cout << (a * b) - (A * B * pow(c, 2));//Выводим площадь незанятой части
	//A * B * pow(c, 2) - площадь занятой квадратами части
}