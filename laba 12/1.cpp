#include <iostream>

using namespace std;

float PowerA3(float a, float b) {
	return b = a * a * a;
}

int main() {
	setlocale(LC_ALL, "rus");
	float arr[5];
	cout << "������� 5 ���������:" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];//������ ������
	}
	cout << "3 ������� ������� �� ���������:" << endl;
	for (int i = 0; i < 5; i++) {
		cout << PowerA3(arr[i], arr[i]) << " ";
	}
}