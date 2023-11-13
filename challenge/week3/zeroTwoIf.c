#include <stdio.h>

int main() {
	int num=0;//num을 0이라 초기화
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);

	if (num == 0) {
		printf("zero");//num이 0이면 zero출력
	}
	else if (num == 1) {
		printf("one");//num이 1이면 one출력
	}
	else if (num == 2) {
		printf("two");//num이 2면 two출력
	}
	else {
		printf("not 0 ~ 2");//그 외 값일때 not0~2출력
	}
	return 0;
}