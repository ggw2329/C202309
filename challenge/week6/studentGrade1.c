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