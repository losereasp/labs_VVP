#include <iostream>

using namespace std;

int Quarter(float x, float y) {
	if (x > 0 and y > 0) {
		return 1;
	}
	else if (x > 0 and y < 0) {
		return 4;
	}
	else if (x < 0 and y > 0) {
		return 2;
	}
	else if (x < 0 and y < 0) {
		return 3;
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	float x, y;
	for (int i = 0; i < 3; i++) {
		cout << "¬ведите точку с ненулевыми вещественными координатами x и y:" << endl;
		cin >> x >> y;
		cout << "Ќомер координатной четрверти:" << endl;
		cout << Quarter(x, y) << " четверть" << endl;
	}
}