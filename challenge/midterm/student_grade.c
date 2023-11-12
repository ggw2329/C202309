#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20


char subjectNames[SUBJECTS][CHARNUM] = { "����", "�߰����", "�⸻���" };
char studentNames[STUDENTS][CHARNUM] = { "" }; // �л� �̸��� ����� �迭
double studentScores[STUDENTS][SUBJECTS] = { 0.0 }; // �л��� ���� �� ������ ������ ����� �迭

void printStudentResults(double Scores[]) {
	for (int i = 0; i < STUDENTS; i++) {
		int sum = 0;
		double finalScore;
		for (int j = 0; j < SUBJECTS; j++) {
			sum += studentScores[i][j];
			finalScore = (double)sum / SUBJECTS;
		}
		printf("\t%s�� ��� ����: %.2lf\n", studentNames[i], finalScore);
	}
}

void printSubjectResult(double Scores[]) {
	for (int i = 0; i < SUBJECTS; i++) {
		int sum = 0;
		double subjectScore;
		for (int j = 0; j < STUDENTS; j++) {
			sum += studentScores[j][i];
			subjectScore = (double)sum / STUDENTS;
		}
		printf("\t%s�� ��� ������ %.2lf �Դϴ�.\n", subjectNames[i], subjectScore);
	}
}



int main() {
	printf("�л� %d���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);
	// TODO 1.1: �л� �̸��� �Է¹޴� �ڵ� ��� �ۼ�
	for (int i = 0; i < STUDENTS; i++) {
		scanf_s("%s", studentNames[i],(int)sizeof(studentNames[i]));
		printf("%d��° �л��� �̸��� �Է��ϼ���: %s\n",i+1,studentNames[i]);
	}


	// �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
	printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
	printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
	for (int i = 0; i < STUDENTS; i++) {
		printf("%s", studentNames[i]);
		if (i != STUDENTS - 1) {
			printf(", ");
		}
	}
	printf("\n");
	printf("--------------------\n");
	printf("�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);


	// TODO 1.2: �л����� ���� �� ������ �Է¹޴� �ڵ� ��� �ۼ�
	for (int i = 0; i < STUDENTS; i++) {
		scanf_s("%lf %lf %lf", &studentScores[i][0], &studentScores[i][1], &studentScores[i][2]);
		printf("%s�� ����:%.1lf %.1lf %.1lf\n", studentNames[i], studentScores[i][0], studentScores[i][1], studentScores[i][2]);
	}


	printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
	printf("--------------------\n");
	printf("�л� �� ������ ������ �����ϴ� \n");


	// TODO 1.3: �л� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
	// HINT1: 2�� for��: (1) �л��� (2) ������� ���� �հ� ����� ���ϰ� ���
	// HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ����: %.2lf\n", studentNames[i], finalScore);

	printStudentResults(studentScores);


	printf("--------------------\n");
	printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");
	// TODO 1.4: ���� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
	// HINT1: 2�� for������ (1) ���� (2) �л����� ���� �հ� ����� ���ϰ� ���	
	// HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ������ %.2lf �Դϴ�.\n", subjectNames[i], subjectScore);
	printSubjectResult(studentScores);

	printf("���α׷��� �����մϴ�. ");
	return 0;
}
