#include <iostream>

using namespace std;

int Sign(float x) {
	if (x < 0) return -1;
	else if (x == 0) return 0;
	else return 1;
}

int main() {
	setlocale(LC_ALL, "rus");
	float a, b;
	cout << "Введите вещественные числа А и В:" << endl;
	cin >> a >> b;
	cout << Sign(a) + Sign(b);
}
