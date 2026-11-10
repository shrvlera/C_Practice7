// вариант - 30
#include <stdio.h>
void first_to_all(int *p1, int *p2, int *p3) {
	int value = *p1;
	*p2 = value;
	*p3 = value;
}
int main() {
	int a;
	int b;
	int c;
	printf("Введите три целых числа через пробел: ");
	if (scanf("%d %d %d", &a, &b, &c) == 3) {
		first_to_all(&a, &b, &c);
		printf("a = %d, b = %d, c = %d\n", a, b, c);
	} else {
		printf("Ошибка: введите 3 числа\n");
	}
	return 0;
}
