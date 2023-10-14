#include <stdio.h>

long multiF(long value);

int main() {
	printf("1부터 2까지의 곱은 %ld\n", multiF(2));
	printf("1부터 3까지의 곱은 %ld\n", multiF(3));
	printf("1부터 5까지의 곱은 %ld\n", multiF(5));

	return 0;
}

long multiF(long value) {//multiF함수 설정
	long i;//i 지정
	long multi = 1;// multi=1 지정

	for (i = 1; i <= value; i = i + 1) {
		multi = multi * i; // i가 value보다 작은 값까지 1씩늘리며 multi*i 반복
	}
	return multi;
}