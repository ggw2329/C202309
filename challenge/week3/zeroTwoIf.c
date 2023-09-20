#include <stdio.h>

int main() {
	int num=0;
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);

	if (num == 0) {
		printf("zero");
	}
	else if (num == 1) {
		printf("one");
	}
	else if (num == 2) {
		printf("two");
	}
	else {
		printf("not 0 ~ 2");
	}
	return 0;
}