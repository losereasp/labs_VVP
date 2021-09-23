#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1, y1, x2, y2;//Объявление переменных
    cin >> x1 >> y1 >> x2 >> y2;//Ввод координат
    cout << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));//Вывод расстояния между точками
}
