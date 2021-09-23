#include <iostream>
#include <cmath>

using namespace std;

int distance(int x1, int y1, int x2, int y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //‘ункци€ просчета рассто€ни€ между точками
}

int main() {
	int x1, y1, x2, y2;//ќбъ€вление переменных
	cin >> x1 >> y1 >> x2 >> y2;//¬вод координат
	cout << "S = " << distance(x2, y2, x1, y2) * distance(x1, y1, x1, y2) << endl;//ѕлощадь
	cout << "P = " << 2 * (distance(x1, y1, x1, y2) + distance(x1, y1, x2, y1));//ѕериметр
}