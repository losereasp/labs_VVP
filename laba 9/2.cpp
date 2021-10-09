#include <iostream>
#include <Windows.h>


using namespace std;

int main() {
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	int n;
	char c;
	cout << "Введите исходное направление робота:" << endl;
	cin >> c;
	cout << "Введите цифровую команду 0, 1, -1:" << endl;
	cin >> n;
  cout << "Направление робота после команд:" << endl;
	if (c == 'с' or c == 'С') {
		if (n == 0) {
			cout << "Север";
		}
		else if (n == 1) {
			cout << "Запад";
		}
		else if (n == -1) {
			cout << "Восток";
		}
	}
	if (c == 'ю' or c == 'Ю') {
		if (n == 0) {
			cout << "Юг";
		}
		else if (n == 1) {
			cout << "Восток";
		}
		else if (n == -1) {
			cout << "Запад";
		}
	}
	if (c == 'з' or c == 'З') {
		if (n == 0) {
			cout << "Запад";
		}
		else if (n == 1) {
			cout << "Юг";
		}
		else if (n == -1) {
			cout << "Север";
		}
	}
	if (c == 'в' or c == 'В') {
		if (n == 0) {
			cout << "Восток";
		}
		else if (n == 1) {
			cout << "Север";
		}
		else if (n == -1) {
			cout << "Юг";
		}
	}
}
