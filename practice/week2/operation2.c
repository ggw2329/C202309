#include <stdio.h>
int main() {
	int x = 4;
	int y = 2;
	int z;

	z = (x + y) * (x - y);
	printf("z = (x + y) * (x - y)=%d\n", z);
	z = (x * y) + (x / y);
	printf("z = (x * y) + (x / y)=%d\n", z);
	z = x+y+2004;
	printf("z = x+y+2004=%d\n", z);
	return 0;
	//x와y의 값을 정하고 각 z값이 나오도록 식 작성
}