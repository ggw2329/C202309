# include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STUDENTS 5 // STUDENTS�� 5�� ����

struct StudentInfo {
	char *name;
	int score;
};
void initializeStudentInfo(struct StudentInfo* student);


void classifyStudents(int scores[], char targetGrade) {
	printf("�л� ���� �з�:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {// i�� STUDENTS���� ������ ���� 1�� �ø�
		if (*(scores + i) >= 90) {
			grade = 'A'; // �迭���� ���� 90���� ũ�ų� ������ grade=A
		}
		else if (*(scores + i) >= 80) {
			grade = 'B';// �迭���� ���� 90���� ũ�ų� ������ grade=
		}
		else if (*(scores + i) >= 70) {
			grade = 'C';
		}
		else if (*(scores + i) >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.", i + 1, targetGrade);
		}
	}
}

int sumScores(int* scores) {
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += *(scores + i);
	}
	return sum;
}

double averageScores(int* scores) {
	int sum = sumScores(scores);
	double average = (double)sum / (double)STUDENTS;
	return average;
}

void printRanks(int* scores) {
	int ranks[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) {
		ranks[i] = 1;
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[j] > scores[i]) {
				ranks[i]++;
			}
		}
		printf("%d �л��� ������ %d �Դϴ�. \n", i + 1, ranks[i]);
	}
}


int main() {
	int scores[STUDENTS];

	int numStudent;
	printf("Enter the number of students: ");
	scanf_s("%d", &numStudent);//�л��� �Է¹ޱ�

	struct StudentInfo* students = (struct StudentInfo*)malloc(numStudent * sizeof(struct StudentInfo));
	//�л��̸�,���� ����
	if (students == NULL) {
		return 1;
	}
	for (int i = 0; i < numStudent; i++) {
		printf("\nEnter information for Student %d:\n", i + 1);
		initializeStudentInfo(&students[i]);

	}
	for (int i = 0; i < numStudent; i++) {
		free(students[i].name);
		free(students[i].score);
	}
	free(students);

	char ch = getchar(); // ���� �ӽ� ���� ����, ��������� ����

	char target;
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�:");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

	printRanks(scores);

	return 0;
}

void initializeStudentInfo(struct StudentInfo* student) {
	printf("Enter the name of the student: ");
	char temp[100];
	scanf_s("%s", temp, (int)sizeof(temp));
	student->name = (char*)malloc((strlen(temp) + 1) * sizeof(char));
	strcpy_s(student->name, strlen(temp) + 1, temp);

	printf("Enter the scores of the student: ");
	scanf_s("%d", &student->score);
}