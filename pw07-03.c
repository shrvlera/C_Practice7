// вариант - 24
#include <stdio.h>
double sum_fact(double x, double y) {
	int n1 = (int)x;
	int n2 = (int)y;

	double fact1 = 1.0;
	for (int i = 1; i <= n1; i++) {
		fact1 *= i;
	}

	double fact2 = 1.0;
	for (int i = 1; i <= n2; i++) {
		fact2 *= i;
	}

	return fact1 + fact2;
}

int main() {
	double a;
	double b;
	printf("Вводите пары чисел через пробел (для выхода: Ctrl+D или введите буквы):\n");
	while (scanf("%lf %lf", &a, &b) == 2) {
		if (a < 0 || b < 0) {
			printf("Ошибка: числа должны быть неотрицательными\n");
			continue;
		}
		double result = sum_fact(a, b);
		printf("Сумма факториалов: %.4lf\n\n", result);
	}
	return 0;
}
