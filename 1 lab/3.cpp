#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	cout << "The arithmetic mean of these numbers: " << (a + b) / 2;
}