// вариант - 18

#include <stdio.h>
int main() {
	int ch;
	int total_count = 0;
	int tion_count = 0;
	int state = 0;

	while ((ch = getchar()) != EOF) {
		total_count++;

		if (state == 0) {
			if (ch == 't') state = 1;
		}
		else if (state == 1) {
			if (ch == 'i') state = 2;
			else if (ch == 't') state = 1;
			else state = 0;
		}
		else if (state == 2) {
			if (ch == 'o') state = 3;
			else if (ch == 't') state = 1;
			else state = 0;
		}
		else if (state == 3) {
			if (ch == 'n') {
				tion_count++;
				state = 0;
			}
			else if (ch == 't') {
				state = 1;
			}
			else {
				state = 0;
			}
		}
	}
	printf("Количество последовательностей \"tion\": %d\n", tion_count);
	printf("Общее количество символов: %d\n", total_count);
	return 0;
}
