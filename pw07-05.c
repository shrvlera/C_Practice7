// вариант - 4
#include <stdio.h>
unsigned long long sum_sq_iter(int n) {
	unsigned long long sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += (unsigned long long)i * i;
	}
	return sum;
}

unsigned long long sum_sq_rec(int n) {
	if (n <= 0) {
		return 0;
	}
	return ((unsigned long long)n * n) + sum_sq_rec(n - 1);
}
int main() {
	int n;
	printf("Введите целое неотрицательное число N: ");
	if (scanf("%d", &n) == 1 && n >= 0) {
		unsigned long long iter_res = sum_sq_iter(n);
		unsigned long long recur_res = sum_sq_rec(n);

		printf("Через цикл (итеративно): %llu\n", iter_res);
		printf("Через рекурсию:          %llu\n", recur_res);
	} else {
		printf("Ошибка: введено некорректное значение\n");
	}
	return 0;
}
