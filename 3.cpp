#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "������� ��� �����: ";
	cin >> a >> b;
	cout << "������� �������������� ���� �����: " << (a + b) / 2;
}