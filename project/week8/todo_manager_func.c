#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // �� �� ����� �����ϱ� ���� 2���� �迭
int taskCount = 0; // �� ���� ���� �����ϱ� ���� ����(��������)

void addTask(char task[]) {
	printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
	scanf_s("%s",task,(int)sizeof(task));//�� ���� �Է¹ް�
	strcpy_s(tasks[taskCount], sizeof(tasks[taskCount]), task);//���ڿ� ����� tasks�迭�� �Է�
	printf("�� ��""%s""�� ����Ǿ����ϴ�\n\n",task);
}

void delTask(int delIndex, int taskCount) {

	printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);

	//Ư�� �ε����� �� �� ���� �� �ڿ� �ִ� �� �� ������ �ű��
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}
}

void printTask(int taskCount) {
	for (int i = 0; i < taskCount; i++) {//i�� taskCount���� ���� ������ 1�� �ø��� �ݺ�
		printf("%d. %s \n", i + 1, tasks[i]);//tasks�迭�� i��° ���
	}
	printf("\n");
}

int main() {
	printf("TODO ����Ʈ ����! \n");

	while (1) {
		int choice = -1; // �����߻��� �ľ����� �ʱⰪ-1����

		// ����ڿ��� �޴��� ����ϰ�, �޴��� �Է¹ޱ�
		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");;
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5. �� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // ���Ḧ ���� flag
		int delIndex = -1;  // �� �� ������ ���� index ���� ����
		int changeIndex = -1; // �� �� ������ ���� index ���� ����
		char ch; // �� �� ������ ���۸� �ޱ� ���� ���� ����

		// �Է¿� ���� ��� ����
		switch (choice) {
		case 1:
			addTask(tasks[taskCount]);
			taskCount++;
			break;
		case 2:
			// �� �� �����ϴ� �ڵ� ��� 
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("���� ������ ������ϴ�.\n");
			}
			else {
				delTask(delIndex, taskCount);
				taskCount -= 1;
			}
			break;
		case 3:
			printf("�� �� ���\n");
			printTask(taskCount);
			break;
		case 4:
			terminate = 1;
			break;
		case 5:
			printf("������ ���� ��ȣ�� �Է��ϼ���.(1���� ����): ");
			scanf_s("%d", &changeIndex);//������ ���� ��ȣ �Է¹���
			printf("�������� ���� �Է��ϼ���.: ");
			ch = getchar();
			scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1]));//������ ���� �ش�迭�� �Է�
			printf("%d ��°�� �� ���� �����Ǿ����ϴ�.", changeIndex);
			break;
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
		}

		if (terminate == 1) {//case4���� ������ terminate=1�� ����Ǿ� ���α׷�break
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}
		// TODO: �� ���� �� á���� üũ�ϴ� �ڵ� �ۼ�
		if (taskCount >= 10) {
			printf("�� ���� �� á���ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}
	}
	return 0;
}