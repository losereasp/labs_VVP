#include <iostream>
#include <cmath>
using namespace std;

int distance(int x1, int y1, int x2, int y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));//Функция просчета расстояния между точками
}

int main() {
	int x1, y1, x2, y2, x3, y3;//Объявляем переменные
	cout << "enter coordinates x and y point A:" << endl;
	cin >> x1 >> y1;//Вводим координаты А
	cout << "enter coordinates x and y point B:" << endl;
	cin >> x2 >> y2;//Вводим координаты Б
	cout << "enter coordinates x and y point C:" << endl;
	cin >> x3 >> y3;//Вводим координаты С
	int ab = distance(x1, y1, x2, y2);//Расстояние А - В
	int ac = distance(x1, y1, x3, y3);//Расстояние А - С
	if (ab > ac) cout << "point: c " << endl;
	else cout << "point: b " << endl;
	cout << "distance: " << min(ab, ac);
}