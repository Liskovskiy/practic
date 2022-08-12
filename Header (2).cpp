#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <locale.h>
#include <math.h>
#include "Header.h"

double rad_in_cor(double corner)
{
    double cor = corner * 3.14159265359 / 180;
    return cor;
}

void interpreter(double x_A, double x_B, double x_C, double y_A, double y_B, double y_C, double x_center, double y_center, double corner)
{
	double x_1A = (x_A - x_center) * sin(corner) - (y_A - y_center) * cos(corner);
	double y_1A = (x_A - x_center) * sin(corner) + (y_A - y_center) * cos(corner);

	double x_1B = (x_B - x_center) * sin(corner) - (y_B - y_center) * cos(corner);
	double y_1B = (x_B - x_center) * sin(corner) + (y_B - y_center) * cos(corner);

	double x_1C = (x_C - x_center) * sin(corner) - (y_C - y_center) * cos(corner);
	double y_1C = (x_C - x_center) * sin(corner) + (y_C - y_center) * cos(corner);

	printf("Точка А с координатами: %lf " "%lf\n", x_1A, y_1A);
	printf("Точка B с координатами: %lf " "%lf\n", x_1B, y_1B);
	printf("Точка C с координатами: %lf " "%lf\n", x_1C, y_1C);
}
