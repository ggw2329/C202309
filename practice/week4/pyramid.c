#include <stdio.h>

int main() {
	int floor;
	printf("�� ���� �װڽ��ϴ�? (5~100)");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {//�� floor���� ���
		for (int j = 0; j < floor - 1 - i; j++) {//floor-1-i��ŭ S���
			printf("S");
		}
		for (int k = 0; k < i * 2 + 1; k++) {//i*2+1��ŭ *���
			printf("*");
		}
		printf("\n");//for�ѻ���Ŭ�� �����ٷ�
	}
	return 0;
}