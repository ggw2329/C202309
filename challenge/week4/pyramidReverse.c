#include <stdio.h>

int main() {
	int floor;
	printf("������ �װڽ��ϴ�? (5~100)");
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) {//i�� floor�Է�,i�� 1�� ����
		for (int j = 0; j < floor - i; j++) {
			printf("S");//floor-i��ŭ S���,j<floor-i���� j�� 1�� ����
		}
		for (int k = 0; k < i * 2 - 1; k++) {
			printf("*");//i*2-1��ŭ *���,k<i*2-1���� k�� 1�� ����
		}
		printf("\n");//�� �ٲٱ�
	}
	return 0;
}