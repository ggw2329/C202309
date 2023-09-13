#include <stdio.h>
int main() {
	int x = 1;


	printf("x=%d\n", x++);
	printf("x=%d\n", x++);
	printf("x=%d\n", ++x);
	printf("x=%d\n", x--);
	printf("x=%d\n", x--);
	printf("x=%d\n", --x);
	return 0;
	//x값을 정하고 증감연산자로 각각값 나오도록 작성
}