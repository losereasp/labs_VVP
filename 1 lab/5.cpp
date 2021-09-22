#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	int a, b;
	cout << "Enter two non-zero numbers: ";
	cin >> a >> b;
	cout << "The sum of their modules: " << abs(a) + abs(b) << endl << "The difference of their modules: " << abs(a) - abs(b) << endl;
	cout << "The product of their modules: " << abs(a) * abs(b) << endl << "Quotient of their modules: " << abs(a) / abs(b);
}