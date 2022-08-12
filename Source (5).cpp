#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <locale.h>
#include <math.h>
#include "Header.h"

int main(void)
{
	setlocale(LC_ALL, "Rus");
	double x_A, x_B, x_C, y_A, y_B, y_C;
	double x_center;
	double y_center;
	double corner;
	printf("Ввидите координаты точек в виде (A(x;y), B(x;y), C(x,y),); Координаты центра вращения (O(x;y)); Угол поворота (Fi) :");
	scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf", &x_A, &y_A, &x_B, &y_B, &x_C, &y_C, &x_center, &y_center, &corner);
	corner = rad_in_cor(corner);
	interpreter(x_A, x_B, x_C, y_A, y_B, y_C, x_center, y_center, corner);
	return 0;
}