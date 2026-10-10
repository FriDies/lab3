#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	double a, b;
	double c;
	double S, P;

	printf("Введите длины двух сторон: ");
	scanf("%lf %lf", &a, &b);

	c = sqrt (a * a + b * b);
	S = 0.5 * a * b;
	P = a + b + c;

	printf("\nРезультаты расчетов\n");
	printf("Катет a = %.2f\n", a);
	printf("Катет b = %.2f\n", b);
	printf("Гипотенуза c = %.2f\n", c);
	printf("Площадь треугольника = %.2f\n", S);
	printf("Периметр треугольника = %.2f\n", P);

	return 0;
}