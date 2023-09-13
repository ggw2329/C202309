#include <stdio.h>
int main() {
	int x = +4;
	int y = -2;
	
	printf("x+(-y)=%d\n", x + (-y));
	printf("-x+(+y)=%d\n", -x + (+y));
	return 0;
	//x와y의 값을 정하고 각 식의 값이 나오도록 식 설정
}