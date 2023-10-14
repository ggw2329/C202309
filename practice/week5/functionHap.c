#include <stdio.h>

int hapf(int value);

int main() {
	printf("1부터 10까지의 합은 %d\n", hapf(10));
	printf("1부터 100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));
	return 0;
}

int hapf(int value) {// hapf함수 설정
	int i;
	int hap = 0;

	i = 1;
	while (i <= value) {
			hap = hap + i;
			i++; // i가 value보다 작거나 같을때까지 hap+i후 i를 1씩 늘림
	}
	return hap;
}