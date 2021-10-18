#include <iostream>

using namespace std;

float Fact2(int N) {
	int res = 1;
	if (N % 2 != 0) {
		for (int i = 1; i <= N; i += 2) {
			res *= i;
		}
	}
	else for (int i = 2; i <= N; i += 2) {
		res *= i;
	}
	return res;
}

int main() {
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите N > 0:" << endl;
	cin >> n;
	cout << "Двойной факториал этого числа:" << endl;
	cout << Fact2(n);
}