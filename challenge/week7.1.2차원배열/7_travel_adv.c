#include <stdio.h>
#define NUMCITY 3// NUMCITY 3���� ����
#define NUMPEOPLE 2// NUMPEOPLE 2�� ����

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();

int main() {
	//����ڷκ��� ���� �̸� �Է¹ޱ�
	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	//����ڷκ��� ��� �̸� �ޱ�
	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���.\n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	//�Լ� ȣ��
	calculateTravelDays(names);

	return 0;
}

int getSum(int numArray[],int length) {
	int totalDays = 0;
	for (int i = 0; i <length; i++) {//i�� length���� �۾��������� 1������ �ݺ�
		totalDays += numArray[i];// numArray[]�� totalDays�� ����
	}
	return totalDays;
}

double getAverage(int numArray[],int length) {
	int totalDays = 0;
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
	}
	double averageDays = (double)totalDays / length;// averageDays�� totalDays/length ����
	return averageDays;
}

void getFamousCity(double dayArray[],int length) {
	double maxDay = 0;
	int maxDayIndex = 0;
	for (int i = 0; i < length; i++) {
		if (dayArray[i] > maxDay) {// dayArray�迭�� maxDay���� ũ��
			maxDay = dayArray[i];// maxDay�� dayArray[i]����
			maxDayIndex = i;//maxDayIndex�� i����
		}
	}
	printf("����� �������� ���� �α��־��� ���ô� %s �Դϴ�. (��ոӹ���: %.2f)\n", cities[maxDayIndex], maxDay);
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	// �� ���ÿ��� �� ����� ���� �� �� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	double averageDays[NUMCITY];
	// �� ���ú� �� �� �� �� ��� �� �� ��� �� ���
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i], NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		printf("���� %s���� ���� �� �ϼ� : %d,��� �� �� : %.2f\n", cities[i], totalDays, averageDays);
		averageDays[i] = averageDay;
	}
	getFamousCity(averageDays, NUMCITY);
}