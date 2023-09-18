#include <stdio.h>

int main() {
	int i = 1;
	do {
		i++
			if (i % 2 == 0) {
				continue;
			}
		printf("Hello World %d\n", i);
	} while (i < 10);
}