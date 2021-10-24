#include <iostream>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите размер массива N:" << endl;
	cin >> n;
	vector <int> a;
	for (int i = 1; i <= n; i++) {
		a.push_back(i);//Закидываем числа в вектор
	}
	int k = n - 1;//размер массива - 1 чтобы не выйти за пределы
	for (int i = 0; i < a.size() / 2; i++) {
		cout << a[i] << " " << a[k] << " ";//Выводим
		k--;
	}
} 
