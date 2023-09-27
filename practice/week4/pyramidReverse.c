#include <stdio.h>

int main() {
	int floor;
	printf("몇층을 쌓겠습니다? (5~100)");
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) {//i에 floor입력,i를 1씩 줄임
		for (int j = 0; j < floor - i; j++) {
			printf("S");//floor-i만큼 S출력,j<floor-i까지 j에 1씩 더함
		}
		for (int k = 0; k < i * 2 - 1; k++) {
			printf("*");//i*2-1만큼 *출력,k<i*2-1까지 k에 1씩 더함
		}
		printf("\n");//줄 바꾸기
	}
	return 0;
}