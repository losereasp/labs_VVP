#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "������� ��� ��������� �����: ";
	cin >> a >> b;
	cout << "����� ��������� �� �������: " << pow(abs(a), 2) + pow(abs(b), 2) << endl << "�������� ��������� �� ������� : " << pow(abs(a), 2) - pow(abs(b), 2) << endl;
	cout << "������������ ��������� �� ������� : " << pow(abs(a), 2) * pow(abs(b), 2) << endl << "������� ��������� �� �������: " << pow(abs(a), 2) / pow(abs(b), 2);
}