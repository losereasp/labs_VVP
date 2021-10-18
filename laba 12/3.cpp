#include <iostream>

using namespace std;

float RingS(float R1, float R2) {
	return abs(pow(R1, 2) * acos(-1) - pow(R2, 2) * acos(-1));//Вычисляем площадь кольца
}

int main() {
	setlocale(LC_ALL, "rus");
	float r1, r2;
	for (int i = 0; i < 3; i++) {
		cout << "Введите R1 > R2:" << endl;
		cin >> r1 >> r2;
		cout << "Площадь кольца:" << endl;
		cout << RingS(r1, r2) << endl;
	}
}