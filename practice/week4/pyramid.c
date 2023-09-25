#include <stdio.h>

int main() {
	int floor;
	printf("몇 층을 쌓겠습니다? (5~100)");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {//총 floor줄을 출력
		for (int j = 0; j < floor - 1 - i; j++) {//floor-1-i만큼 S출력
			printf("S");
		}
		for (int k = 0; k < i * 2 + 1; k++) {//i*2+1만큼 *출력
			printf("*");
		}
		printf("\n");//for한사이클후 다음줄로
	}
	return 0;
}