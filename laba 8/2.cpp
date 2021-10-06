#include <iostream>

using namespace std;

int main() {
	int a, b, c;//Объявляем переменные
	cout << "enter a, b, c:" << endl;
	cin >> a >> b >> c;//Ввводим 
	cout << "the sum of the two largest:" << endl;
	cout << a + b + c - min(a, min(b, c));//Считаем и выводим
}