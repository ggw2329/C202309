#include <stdio.h>

int main() {
	int i = 0;
	while (i < 10) {
		i++;
		if (i % 2 == 0) {
			continue;
		}
		printf("Hello world %d\n", i);
	}
