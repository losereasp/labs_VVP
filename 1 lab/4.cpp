#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	int a, b;
	cout << "Enter two non-zero numbers: ";
	cin >> a >> b;
	cout << "The sum of the squares of their modules: " << pow(abs(a), 2) + pow(abs(b), 2) << endl << "The difference of the squares of their modules: " << pow(abs(a), 2) - pow(abs(b), 2) << endl;
	cout << "The product of the squares of their modules: " << pow(abs(a), 2) * pow(abs(b), 2) << endl << "Quotient of the squares of their modules: " << pow(abs(a), 2) / pow(abs(b), 2);
}