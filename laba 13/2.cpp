//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	int n, a, d;
//	vector <int> arr;//�����. ������
//	cout << "������� ������ ������� N > 1, ������ ���� A � ����������� D ����. ����������:" << endl;
//	cin >> n >> a >> d;
//	for (int i = 1; i <= n; i++) {
//		arr.push_back(i);//������� � ������ �����
//	}
//	int k = 1;//������� �����
//	arr[0] = a;
//	for (int i = 1; i < n; i++) {
//		arr[i] = a * pow(d, k);//������ ����� ��� �������� i
//		k++;//����������� �������
//	}
//	cout << "������ � ����. �����������:" << endl;
//	for (int i = 0; i < arr.size(); i++) {
//		cout << arr[i] << " ";//������� ������
//	}
//}