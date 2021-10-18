#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int n, a = 0;
	cout << "Ââåäèòå öåëîå ÷èñëî > 0:" << endl;
	cin >> n;
	for (int i = 1; i <= 2 * n - 1; i+=2) {
		a += i;
		cout << a << " ";
	}
	cout << endl << n << " â êâàäðàòå = " << a;
}
