#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	float a = 1.1, res = 1;
	int i = 1, n;
	cout << "Ââåäèòå öåëîå ÷èñëî > 0:" << endl;
	cin >> n;
	while (i <= n) {
		res *= a;
		a += 0.1;
		i++;
	}
	cout << "Ðåçóëüòàò óìíîæåíèÿ 1.1 * 1.2 * 1.3 * .... (" << n << " ñîìíîæèòåëåé):" << endl;
	cout << res;
}
