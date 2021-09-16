#include <stdio.h>
#include <locale.h>

int main() {
	int x, y;
	printf("Enter x and y: \n"); 
	scanf_s("%d %d", &x, &y); //Ввод переменных
	double res = (x + (float)y * 1.2); //Вычисление
	printf("Result: \n%d + %d / 2 = %f \n", x, y, res); //Вывод результата

	return 0;
}