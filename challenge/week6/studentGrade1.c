# include <stdio.h>
#define STUDENTS 5 // STUDENTS�� 5�� ����

void classifyStudents(int scores[], char targetGrade) {
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {// i�� STUDENTS���� ������ ���� 1�� �ø�
		if (scores[i] >= 90) {
			grade = 'A'; // �迭���� ���� 90���� ũ�ų� ������ grade=A
		}
		else if (scores[i] >= 80) {
			grade = 'B';// �迭���� ���� 80���� ũ�ų� ������ grade=B
		}
		else if (scores[i] >= 70) {
			grade = 'C';// �迭���� ���� 70���� ũ�ų� ������ grade=C
		}
		else if (scores[i] >= 60) {
			grade = 'D';// �迭���� ���� 60���� ũ�ų� ������ grade=D
		}
		else {
			grade = 'F';// �� �� ������ grade=F
		}
		if (targetGrade == grade) {
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.", i + 1, targetGrade);// targetGrade�� grade�� ������ �л��� ��� ���
		}
	}
}
int sumScores(int scores[]) {
	int i;
	int sum = 0;

	for (i = 1; i <= STUDENTS; i = i + 1) {
		scores[i]
	}
}
void main() {
	value = sumScores(int scores[]);
}
double averageScores(int scores[]) {

}
void printRanks(int scores[]) {

}
int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);// �Է��� ���� �� �迭�� ����
	}

	char ch = getchar(); // ���� �ӽ� ���� ����, ��������� ����

	char target;
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�:");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("�л��� ������ �� ���� %d�̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

	printRanks(scores);
	return 0;
}