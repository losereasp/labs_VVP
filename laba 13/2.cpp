#include <iostream>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int n, a, d;
	vector <int> arr;//динам. массив
	cout << "Введите размер массива N > 1, первый член A и знаменатель D геом. прогрессии:" << endl;
	cin >> n >> a >> d;
	for (int i = 1; i <= n; i++) {
		arr.push_back(i);//заносим в вектор числа
	}
	int k = 1;//степень числа
	arr[0] = a;
	for (int i = 1; i < n; i++) {
		arr[i] = a * pow(d, k);//меняем число под индексом i
		k++;//увеличиваем степень
	}
	cout << "Массив с геом. прогрессией:" << endl;
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";//Выводим массив
	}
}
