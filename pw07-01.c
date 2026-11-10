// вариант - 29
#include <stdio.h>
int main() {
	int ch;
	while ((ch = getchar()) != EOF) {
		if (ch % 5 == 0)
			putchar(ch);
	}
	return 0;
}
