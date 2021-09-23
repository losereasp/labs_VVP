#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Enter the sides of the rectangle:" << endl;
	cin >> a >> b;
	cout << "The area of the rectangle: " << a * b << endl << "Rectangle perimeter: " << 2 * (a + b);
}