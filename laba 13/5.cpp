//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	int n;
//	vector <int> a;
//	cout << "������� ������ ������� N:" << endl;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		a.push_back(i);//����� � ������ �������
//	}
//	cout << "������ ��� ��������� ���������:" << endl;
//	for (int i = 0; i < a.size(); i++) {
//		if(i % 2 != 0)//��������� �� ����������
//		cout << a[i] << " ";//�������
//	}
//	cout << endl << "������ ��� ������� ���������:" << endl;
//	for (int i = a.size() - 1; i >= 0; i--) {
//		if(i % 2 == 0)//��������� �� ��������
//		cout << a[i] << " ";//�������
//	}
//}