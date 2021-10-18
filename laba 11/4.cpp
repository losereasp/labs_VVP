#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	float sum = 1000, k = 0, p, r;
	cout << "Введите процент вклада:" << endl;
	cin >> p;
	while (sum <= 1100) {
		sum += sum * p / 100;
		k++;
	}
	cout << "Через " << k << " месяц(а)(ев) сумма на вкладе будет равна " << sum;
}
