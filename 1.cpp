#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "������� ������� ��������������:" << endl;
	cin >> a >> b;
	cout << "������� ��������������: " << a * b << endl << "�������� ��������������: " << 2 * (a + b);
}