#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "������� ����� ������������� ����� � < B:" << endl;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << " ";
		}
	}
}