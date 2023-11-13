# include <stdio.h>
#define STUDENTS 5 // STUDENTS를 5로 정의

void classifyStudents(int scores[], char targetGrade) {
	printf("학생 성적 분류:\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {// i가 STUDENTS보다 작을때 까지 1씩 늘림
		if (scores[i] >= 90) {
			grade = 'A'; // 배열안의 수가 90보다 크거나 같으면 grade=A
		}
		else if (scores[i] >= 80) {
			grade = 'B';// 배열안의 수가 80보다 크거나 같으면 grade=B
		}
		else if (scores[i] >= 70) {
			grade = 'C';// 배열안의 수가 70보다 크거나 같으면 grade=C
		}
		else if (scores[i] >= 60) {
			grade = 'D';// 배열안의 수가 60보다 크거나 같으면 grade=D
		}
		else {
			grade = 'F';// 그 외 점수는 grade=F
		}
		if (targetGrade == grade) {
			printf("%d 학생은 %c 점수를 받았습니다.", i + 1, targetGrade);// targetGrade와 grade가 같으면 학생의 등급 출력
		}
	}
}
int sumScores(int scores[]) {
	int sum = 0; //sum의 초기값0

	for (int i = 0; i <STUDENTS; i++) { // i가 STUDENTS보다 작을때까지 1을 더함
		sum += scores[i]; // scores각 배열을 더함
	}
	return sum;
}

double averageScores(int scores[]) { //double은 실수를 표현함
	int sum = sumScores(scores); //sum은 sumScores함숫값
	double average = (double)sum / (double)STUDENTS;//average는 sum/STUDENTS 값이다
	return average;
}
void printRanks(int scores[]) {
	int ranks[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) {
		ranks[i] = 1;// 초기 순위를 1로 설정
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[j] > scores[i]) {
				ranks[i]++; // 현재 요소보다 큰 다른 요소가 있으면 순위 증가
			}
		}
		printf("%d 학생의 순위는 %d 입니다.\n", i, ranks[i]);
	}
}
int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);// 입력한 값을 각 배열에 저장
	}

	char ch = getchar(); // 버퍼 임시 저장 변수, 엔터지우기 위해

	char target;
	printf("특정 점수 (A,B,C,D,F)를 입력하시오:");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("학생들 점수의 총 합은 %d이고, 평균 값은 %lf입니다.\n", sum, average);

	printRanks(scores);
	return 0;
}