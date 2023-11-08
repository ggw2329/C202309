#include <stdio.h>

void summation(double* a, double* b,double*c);
void subtraction(double* a, double* b, double* c);
void multification(double* a, double* b, double* c);
void division(double* a, double* b, double* c);

int main() {
	double a = 2, b = 3;
	double result;
	summation(&a, &b, &result);
	printf("%.0lf + %.0lf = %.2lf \n", a, b, result);

	subtraction(&a, &b, &result);
	printf("%.0lf - %.0lf = %.2lf \n", a, b, result);

	multification(&a, &b, &result);
	printf("%.0lf * %.0lf = %.2lf \n", a, b, result);

	division(&a, &b, &result);
	printf("%.0lf / %.0lf = %.2lf \n", a, b, result);
	return 0;
}

void summation(double* a, double* b,double*c) {
	double result;
	result = *a + *b;
	*c = result;
}
void subtraction(double* a, double* b, double* c) {
	double result;
	result = *a - *b;
	*c = result;
}
void multification(double* a, double* b, double* c) {
	double result;
	result = *a * *b;
	*c = result;
}
void division(double* a, double* b, double* c) {
	double result;
	result = *a / *b;
	*c = result;
}