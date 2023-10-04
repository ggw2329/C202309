#include <stdio.h>

long multiF(long value);

void main() {
	printf("1부터 2까지의 곱은 %d\n", multiF(2));
	printf("1부터 3까지의 곱은 %d\n", multiF(3));
	printf("1부터 5까지의 곱은 %d\n", multiF(5));
}

long multiF(long value) {
	long i;
	long multi = 1;

	for (i = 1; i <= value; i = i + 1) {
		multi = multi * i;
	}
	return multi;
}