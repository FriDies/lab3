#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define D 2.54
#define M 2.32
#define S 7.46
int main()
{
    setlocale(LC_CTYPE, "RUS");
    int num1, num2;
    puts("введите число");
    scanf("%d", &num1);
    printf("¬ведено число %d\n", num1);
    puts("введите второе число");
    scanf("%d", &num2);
    printf("¬ведено второе число %d\n", num2);
    printf("%d %d %d %d %d\n", num1 + num2, num1 - num2, num1 * num2, num1 / num2, num1 % num2);

    main1();
    main2();
    return 0;
}

int main1() 
{
    setlocale(LC_CTYPE, "RUS");
    int dym;
    float result_D, result_M, result_S;
    printf("¬ведите значение дл€ расчЄта: ");
    scanf("%d", &dym);
    result_D = D * dym;
    result_M= M * dym;
	result_S = S * dym;
	printf("%d дюймов = %.2f см\n", dym, result_D);
    printf("%d испанских дюймов = %.2f см\n", dym, result_M);
	printf("%d старолитовских дюймов = %.2f см\n", dym, result_S);
    return 0;
}

int main2()
{
    setlocale(LC_CTYPE, "RUS");
    double a, b;
    printf("¬ведите a: ");
    scanf("%lf", &a);
    printf("¬ведите b: ");
    scanf("%lf", &b);
    char x1[20];
	char x2[20];
	char x3[20];
	sprintf(x1, "%g*%g", a, b);
	sprintf(x2, "%g+%g", a, b);
	sprintf(x3, "%g-%g", a, b);
    printf("----------------------------------\n");
    printf("| %8s | %8s | %8s |\n", "a*b", "a+b", "a-b");
    printf("----------------------------------\n");
    printf("| %8s | %8s | %8s |\n", x1, x2, x3);
    printf("----------------------------------\n");
    printf("| %8.0f | %8.0f | %8.0f |\n", a * b, a + b, a - b);

    return 0;
}