#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	float a, res = 1;
	int n;
	cout << "Ââåäèòå âåùåñòâåííîå ÷èñëî À è öåëîå ÷èñëî N:" << endl;
	cin >> a >> n;
	for (int i = 1; i <= n; i++) {
		res += pow(a, i);
	}
	cout << "Ñóììà 1 + À + À^2 + A^3 + ... + A^N = " <*/< res;
}
