#include <stdio.h>

int main() {
	int i = 1;//i�� 1�̶� �ʱ�ȭ��
	do {
		i++;//i�� 1�� �ø��� �ݺ�
		if (i % 2 == 0) {//i�� 2�� ���� �������� 0�̸� �Ѿ
				continue;
		}
		printf("Hello World %d\n", i);
	} while (i < 10);//i�� 10���� ���������� �ݺ�
	return 0;
}