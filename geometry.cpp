#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float const P = 3.1415;
int main()
{
    setlocale(LC_ALL, "RUS");
    float x = 0, y = 0, r = 0, per = 0, S = 0;
    printf_s("¬ведите данные\n");
    scanf_s("%f", &x);
    scanf_s("%f", &y);
    scanf_s("%f", &r);
    per = 2 * P * r;
    S = P * r * r;
    printf_s("периметр=%f\n", per);
    printf_s("площадь=%f\n", S);
}