#include <stdio.h>

int main() {
	int i = 0;
	while (i < 10) {//i가 10보다 작을때 까지 1씩 추가
		i++;
		if (i % 2 == 0) {//2로나눈 나머지가 0일때 계속진행
			continue;
		}
		printf("Hello world %d\n", i);
	}
	return 0;
}