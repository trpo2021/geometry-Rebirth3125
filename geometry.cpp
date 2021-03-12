#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    double x, y, r;
    char str[100];
    int flag = 0;
    char circle[7] = "circle";
    char* point = str;
    char* start_point;
    char* last_point = str;
    char* end;

    fgets(str, sizeof(str), stdin);

    while (isalpha(*last_point) != 0)
        last_point++;

    if ((last_point - point) <= 6) {
        if (strncmp(str, circle, 6) == 0)
            flag = 1;
    } else if (strncmp(str, circle, last_point - point) == 0)
        flag = 1;
    if (flag == 1) {
        flag = 0;
        point = last_point;
        start_point = point;

        while (*start_point != 10) {
            if (*start_point == '(') {
                point = start_point;
                flag = 1;
                break;
            }
            start_point++;
        }

        if (flag == 0) {
            printf("ERROR: expected 'circle' (\n");
            return 0;
        }

        while (isdigit(*point) == 0) // First number
        {
            if ((*point == ' ') || (*point == '('))
                point++;
            else {
                printf("ERROR X\n");
                return 0;
            }
        }

        if (isdigit(*point) != 0) {
            x = strtod(point, &end);
            point = end;
            printf("x=%f\n", x);
        }

        while (isdigit(*point) == 0) // Second number
        {
            if (*point == ' ')
                point++;
            else {
                printf("ERROR Y\n");
                return 0;
            }
        }

        if (isdigit(*point) != 0) {
            y = strtod(point, &end);
            point = end;
            printf("y= %f\n", y);
        }

        start_point = point;
        flag = 0;

        while (*start_point != 10) {
            if ((*start_point != ' ') && (*start_point != ',')) {
                printf("ERROR ,\n");
                return 0;
            } else if (*start_point == ',') {
                point = start_point;
                flag = 1;
                break;
            } else
                start_point++;
        }

        if (flag == 0)
            printf("ERROR ,");

        while (isdigit(*point) == 0) // Third number
        {
            if ((*point == ' ') || (*point == ','))
                point++;
            else {
                printf("ERROR Radius\n");
                return 0;
            }
        }

        if (isdigit(*point) != 0) {
            r = strtod(point, &end);
            point = end;
            printf("r=%f\n", r);
        }

        flag = 0;
        start_point = point;

        while (*start_point != 10) {
            if ((*start_point != ' ') && (*start_point != ')')) {
                printf("ERROR )\n");
                return 0;
            } else if (*start_point == ')') {
                point = start_point;
                flag = 1;
                break;
            } else
                start_point++;
        }

        if (flag == 0) {
            printf("ERROR )\n");
            return 0;
        }

        point++;

        while (*point != 10) {
            if (*point != ' ') {
                printf("ERROR: no items expected\n");
                return 0;
            } else
                point++;
        }
        printf("data entered correctly\n");
        return 0;
    }

    else
        printf("ERROR: expected 'circle'\n");
    return 0;
}