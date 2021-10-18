#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int n, k = 0, res = 0;
	cout << "Введите целое число N > 1:" << endl;
	cin >> n;
	while (res < n) {
		res += k;
		if (res >= n)
			break;
		else k++;
	}
	cout << "Наименьшее число К: " << k << endl << "Сумма чисел: " << res;
}
