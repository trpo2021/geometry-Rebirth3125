#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include <libgeometry/check.h>

#define N 50

int main()
{
    float radius = 0,radius2=0;
    float area = 0, perimetr = 0, area2=0, perimetr2=0;
    char r_arr[N], r_arr2[N];
    char input_arr[N] = {0}, input_arr2[N]={0};
    FILE* fptr = NULL;
    FILE* fptr2 = NULL;
    char* ukazat1 = input_arr;
    char* ukazat2 = input_arr2;


    fptr = fopen("input.txt", "r");
    fptr2 = fopen("input2.txt", "r");
    if (!fptr||!fptr2) {
        printf("Can`t open the file\n");
    } else {
        int i = 0;

        while (i < N) {
            fscanf(fptr, "%c", &input_arr[i]);
            fscanf(fptr2, "%c", &input_arr2[i]);
            ++i;
        }
    }

    fclose(fptr); //записали строку из файла в массив а
    fclose(fptr2);

    int counter_1 = name_verification(input_arr);
    int counter_2 = checking_parameters_figure(input_arr);

    if (counter_1 > 0) {
        for (int i = 0; i < N; i++) {
            printf("%c", input_arr[i]);
        }
        printf("incorrect name of figure\n");
        printf("please correct\n"); // ошибка об имени

    } else {
        if (counter_2 > 0) {
            for (int i = 0; i < N; i++) {
                printf("%c", input_arr[i]);
            }
            printf("invalid values\n");
            printf("please correct\n"); // ошибка о параметрах фигуры
        } else {
            for (int i = 0; i < N; i++) {
                if ((input_arr[i] == ',') && (input_arr[i + 1] == ' ')) {
                    for (int k = i; input_arr[k + 1] != ')'; k++) {
                        r_arr[k - i] = input_arr[k + 1];
                    }
                }
            }

            radius = atof(r_arr);

            area = M_PI * radius * radius;

            perimetr = 2 * M_PI * radius;

            printf("\n");
            for (int i = 0; i < N; i++) {
                printf("%c", input_arr[i]);
            }

            printf("area = %.3f\n", area);
            printf("perimeter = %.3f\n", perimetr);
        }
    }

    int counter_3 = name_verification(input_arr2);
    int counter_4 = checking_parameters_figure(input_arr2);

    if (counter_3 > 0) {
        for (int i = 0; i < N; i++) {
            printf("%c", input_arr2[i]);
        }
        printf("incorrect name of figure\n");
        printf("please correct\n"); // ошибка об имени

    } else {
        if (counter_4 > 0) {
            for (int i = 0; i < N; i++) {
                printf("%c", input_arr2[i]);
            }
            printf("invalid values\n");
            printf("please correct\n"); // ошибка о параметрах фигуры
        } else {
            for (int i = 0; i < N; i++) {
                if ((input_arr2[i] == ',') && (input_arr2[i + 1] == ' ')) {
                    for (int k = i; input_arr2[k + 1] != ')'; k++) {
                        r_arr2[k - i] = input_arr2[k + 1];
                    }
                }
            }

            radius2 = atof(r_arr2);

            area2 = M_PI * radius2 * radius2;

            perimetr2 = 2 * M_PI * radius2;

            printf("\n");
            for (int i = 0; i < N; i++) {
                printf("%c", input_arr2[i]);
            }

            printf("area2 = %.3f\n", area2);
            printf("perimeter2 = %.3f\n", perimetr2);
        }
    }
    char *x1_s = (ukazat1 +7);
    char *x2_s = (ukazat2 +7);
    char *y1_s = (ukazat1 +9);
    char *y2_s = (ukazat2 +9);
    int x1 = atoi(x1_s);
    int x2 = atoi(x2_s);
    int y1 = atoi(y1_s);
    int y2 = atoi(y2_s);

    if(radius-radius2<sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))&&sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))<radius+radius2)
      printf(" figure intersect ");
    else
      printf(" figure not intersect ");

    return 0;
  }
