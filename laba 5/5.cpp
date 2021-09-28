#include <iostream>

using namespace std;

int main() {
	int a;//Объявляем переменную 
	cout << "enter three-digit number:" << endl;
	cin >> a;//Вводим трехзначное число
	cout << "the first digit is ahead of this number:" << endl;
	cout << a % 100 << a / 100;//Выводим первую цифру этого числа вначале
}