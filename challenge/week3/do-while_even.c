#include <stdio.h>

int main() {
	int i = 1;//i를 1이라 초기화함
	do {
		i++;//i를 1씩 늘리며 반복
		if (i % 2 == 0) {//i를 2로 나눈 나머지가 0이면 넘어감
				continue;
		}
		printf("Hello World %d\n", i);
	} while (i < 10);//i가 10보다 작을때까지 반복
	return 0;
}