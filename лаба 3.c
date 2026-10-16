#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h> 

#define D 2.54      
#define M 2.32166   
#define S 2.7076  

int calculate_sum(int a, int b) {
    return a + b;
}

double convert_dym(int dym, double ratio) {
    return ratio * dym;
}

int print_table(double a, double b) {
    char x1[20], x2[20], x3[20];

    sprintf(x1, "%g*%g", a, b);
    sprintf(x2, "%g+%g", a, b);
    sprintf(x3, "%g-%g", a, b);

	printf("---------------------------------\n");
    printf("| %8s | %8s | %8s |\n", "a*b", "a+b", "a-b");
    printf("---------------------------------\n");
    printf("| %8s | %8s | %8s |\n", x1, x2, x3);
    printf("---------------------------------\n");
    printf("| %8.0f | %8.0f | %8.0f |\n", a * b, a + b, a - b);

    return 0;
}

double get_area(double a, double b) {
    return 0.5 * a * b;
}

double get_perimeter(double a, double b) {
    double c = sqrt(a * a + b * b);
    return a + b + c;
}

int main() {
    setlocale(LC_CTYPE, "RUS");

    // === ЗАДАНИЕ 1 ===
    printf("=== ЗАДАНИЕ 1 ===\n");
    int num1, num2;
    puts("Введите первое число:");
    scanf("%d", &num1);
    printf("Введено число %d\n", num1);

    puts("Введите второе число:");
    scanf("%d", &num2);
    printf("Введено второе число %d\n", num2);

    int sum = calculate_sum(num1, num2);
    printf("Сумма: %d\n", sum);
    printf("Разность: %d\n", num1 - num2);
    printf("Произведение: %d\n", num1 * num2);
    printf("Частное: %d\n", num2 / num1);
    printf("Остаток: %d\n", num2 % num1);

    // === ЗАДАНИЕ 2 ===
    printf("\n=== ЗАДАНИЕ 2 ===\n");
    int dym;
    printf("Введите значение для расчёта (в дюймах): ");
    scanf("%d", &dym);

    printf("%d английских дюймов = %.2f см\n", dym, convert_dym(dym, D));
    printf("%d испанских дюймов = %.2f см\n", dym, convert_dym(dym, M));
    printf("%d литовских дюймов = %.2f см\n", dym, convert_dym(dym, S));

    // === ЗАДАНИЕ 3 ===
    printf("\n=== ЗАДАНИЕ 3 ===\n");
    double a, b;
    printf("Введите a: ");
    scanf("%lf", &a);
    printf("Введите b: ");
    scanf("%lf", &b);

    int table_status = print_table(a, b);

    // === ДОМАШНЕЕ ЗАДАНИЕ (ВАРИАНТ 21) ===
    printf("\n=== ДОМАШНЕЕ ЗАДАНИЕ (Вариант 21) ===\n");
    printf("Вычисление площади и периметра прямоугольного треугольника\n");

    double cathet1, cathet2;
    printf("Введите длину первого катета: ");
    scanf("%lf", &cathet1);
    printf("Введите длину второго катета: ");
    scanf("%lf", &cathet2);

    double area = get_area(cathet1, cathet2);
    double perimeter = get_perimeter(cathet1, cathet2);

    printf("Площадь треугольника: %.4f\n", area);
    printf("Периметр треугольника: %.4f\n", perimeter);

    system("pause");
    return 0;
}