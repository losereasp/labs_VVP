#include <iostream>

using namespace std;

int main() {
	int b;//Объявление перменной
	cout << "enter file size in bytes:" << endl;
	cin >> b;//Вводим байты
	cout << "file size in kb: " << b / 1024;//Вывод кб
}