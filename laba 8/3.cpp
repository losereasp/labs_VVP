#include <iostream>
#include <cmath>
using namespace std;

float distance(float x1, float y1, float x2, float y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));//Функция просчета расстояния между точками
}

int main() {
	float x1, y1, x2, y2, x3, y3;//Объявляем переменные
	cout << "enter coordinates x and y point A:" << endl;
	cin >> x1 >> y1;//Вводим координаты А
	cout << "enter coordinates x and y point B:" << endl;
	cin >> x2 >> y2;//Вводим координаты Б
	cout << "enter coordinates x and y point C:" << endl;
	cin >> x3 >> y3;//Вводим координаты С
	float ab = distance(x1, y1, x2, y2);//Расстояние А - В
	float ac = distance(x1, y1, x3, y3);//Расстояние А - С
	if (ab > ac) cout << "point: c " << endl;
	else cout << "point: b " << endl; 
	cout << "distance: " << min(ab,ac) << endl;
	cout << ab;
}
