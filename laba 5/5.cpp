#include <iostream>

using namespace std;

int main() {
	int a;//объявляем переменную 
	cout << "enter three-digit number:" << endl;
	cin >> a;//вводим трехзначное число
	cout << "the first digit is ahead of this number:" << endl;
	cout << a / 10 % 10 << a % 10 << a / 100;//выводим первую цифру числа в конце
}