#include <stdio.h>

int main() {
	int num=0;//num�� 0�̶� �ʱ�ȭ
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	if (num == 0) {
		printf("zero");//num�� 0�̸� zero���
	}
	else if (num == 1) {
		printf("one");//num�� 1�̸� one���
	}
	else if (num == 2) {
		printf("two");//num�� 2�� two���
	}
	else {
		printf("not 0 ~ 2");//�� �� ���϶� not0~2���
	}
	return 0;
}