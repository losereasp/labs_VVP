//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	int n;
//	vector <int> a;
//	cout << "Введите размер массива N:" << endl;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		a.push_back(i);//Числа в вектор вводиим
//	}
//	cout << "Номера под нечетными индексами:" << endl;
//	for (int i = 0; i < a.size(); i++) {
//		if(i % 2 != 0)//Проверяем на нечетность
//		cout << a[i] << " ";//Выводим
//	}
//	cout << endl << "Номера под четными индексами:" << endl;
//	for (int i = a.size() - 1; i >= 0; i--) {
//		if(i % 2 == 0)//Проверяем на четность
//		cout << a[i] << " ";//Выводим
//	}
//}