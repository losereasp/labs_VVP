//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	float a, res = 1;
//	int n, i = 1;
//	cout << "Введите вещественное число А и целое число N > 0:" << endl;
//	cin >> a >> n;
//	for (int i = 1; i <= n; i++) {
//		res += pow(-a, i);
//		//res += pow(a, i + 1);
//	}
//	cout << "Сумма 1 - А + А^2 - A^3 + ... +- A^N = " << res;
//}