#include <stdio.h>

int hapf(int value);

int main() {
	printf("1���� 10������ ���� %d\n", hapf(10));
	printf("1���� 100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));
	return 0;
}

int hapf(int value) {// hapf�Լ� ����
	int i;
	int hap = 0;

	i = 1;
	while (i <= value) {
			hap = hap + i;
			i++; // i�� value���� �۰ų� ���������� hap+i�� i�� 1�� �ø�
	}
	return hap;
}