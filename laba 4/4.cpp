#include <iostream>

using namespace std;

int main() {
	int v1, v2, t;//Вводим переменные
	cout << "enter speed, one more time speed, time:" << endl;
	cin >> v1 >> v2 >> t;//Вводим скорости и время
	cout << "the distance between the cars in " << t << " hours " << (v1 + v2) * t;//Выводим расстояние между машинами
}