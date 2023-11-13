# include <stdio.h>
#define STUDENTS 5 // STUDENTS를 5로 정의

void classifyStudents(int scores[], char targetGrade) {
	printf("학생 성적 분류:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {// i가 STUDENTS보다 작을때 까지 1씩 늘림
		if (*(scores+i) >= 90) {
			grade = 'A'; // 배열안의 수가 90보다 크거나 같으면 grade=A
		}
		else if (*(scores+i) >= 80) {
			grade = 'B';// 배열안의 수가 90보다 크거나 같으면 grade=
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
			printf("%d 학생은 %c 점수를 받았습니다.", i + 1, targetGrade);
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
		printf("%d 학생의 순위는 %d 입니다. \n", i+1, ranks[i]);
	}
}


int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", (scores+i));
	}

	char ch = getchar(); // 버퍼 임시 저장 변수, 엔터지우기 위해

	char target;
	printf("특정 점수 (A,B,C,D,F)를 입력하시오:");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);

	printRanks(scores);

	return 0;
}