//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	int n, a, b;
//	vector <int> arr;
//	cout << "������� ������ ������� N, ������ ������� �, ������ ������� �:" << endl;
//	cin >> n >> a >> b;
//	for (int i = 1; i <= n; i++) {
//		arr.push_back(i);//������� � ������ �����
//	}
//	arr[0] = a;
//	arr[1] = b;
//	arr[2] = a + b;
//	a = arr[2];
//	for (int i = 3; i < arr.size(); i++) {
//		arr[i] = a * 2;
//		a = arr[i];
//	}
//	cout << "�������� ������:" << endl;
//	for (int i = 0; i < arr.size(); i++) {
//		cout << arr[i] << " ";//������� �������� ������
//	}
//}