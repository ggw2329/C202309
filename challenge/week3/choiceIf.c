#include <stdio.h>

int main() {
	int choice;
	printf("1. 파일 저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s("%d", &choice);

	if (choice == 1) {
		printf("파일을 저장합니다.");//choice가 1이면 파일 저장 출력
	}
	else if (choice == 2) {
		printf("저장 없이 닫습니다.");//choice가 2이면 저장 없이 닫음 출력
	}
	else if (choice == 3) {
		printf("종료합니다.");//choice가 3이면 종료합니다 출력
	}
	else {
		printf("잘못 입력하셨습니다.");//그 외 숫자면 잘못 입력 출력
	}
	return 0;
}