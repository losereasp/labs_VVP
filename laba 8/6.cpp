#include <iostream>

using namespace std;

int main() {
	int a;
	cout << "enter interger 1 - 999:" << endl;
	cin >> a;
	if (a < 10 and a % 2 == 0) cout << "even one digit number";
	else if (a < 10 and a % 2 != 0) cout << "odd one digit number";
	if (a >= 10 and a < 100 and a % 2 == 0) cout << "even two digit number";
	else if (a >= 10 and a < 100 and a % 2 != 0) cout << "odd two digit number";
	if (a > 99 and a % 2 == 0) cout << "even three digit number";
	else if (a > 99 and a % 2 != 0) cout << "odd three digit number";
}