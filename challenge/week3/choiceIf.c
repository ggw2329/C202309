#include <stdio.h>

int main() {
	int choice;
	printf("1. ���� ����\n");
	printf("2. ���� ���� �ݱ�\n");
	printf("3. ����\n");
	scanf_s("%d", &choice);

	if (choice == 1) {
		printf("������ �����մϴ�.");//choice�� 1�̸� ���� ���� ���
	}
	else if (choice == 2) {
		printf("���� ���� �ݽ��ϴ�.");//choice�� 2�̸� ���� ���� ���� ���
	}
	else if (choice == 3) {
		printf("�����մϴ�.");//choice�� 3�̸� �����մϴ� ���
	}
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.");//�� �� ���ڸ� �߸� �Է� ���
	}
	return 0;
}