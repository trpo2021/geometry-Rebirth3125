#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    float x = 0, y = 0, r = 0, per = 0, S = 0;
    printf_s("Enter the values\n");
    scanf_s("%f", &x);
    scanf_s("%f", &y);
    scanf_s("%f", &r);
    per = 2 * P * r;
    S = P * r * r;
    printf_s("Perimetr=%f\n", per);
    printf_s("Square=%f\n", S);
}