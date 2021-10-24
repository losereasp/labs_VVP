#include <iostream>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int n;
	vector <int> arr;
	cout << "Введите целое число N > 0: " << endl;
	cin >> n;
	for (int i = 1; i <= n * 2; i++) {
		if(i % 2 != 0)
		arr.push_back(i);
	}
	cout << "Положительные нечетные числа в массиве: " << endl;
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
}