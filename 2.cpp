#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int d;
	cout << "������� ������� ����������: ";
	cin >> d;
	cout << "����� ����������: " << 3.14 * d << endl;
}