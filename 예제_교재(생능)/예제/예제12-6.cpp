#include <stdio.h> 
#include <math.h>
#define PI 3.14159265	
double rad2deg(double radian);
double deg2rad(double degree);
int main(void)
{
	double degree = 90;
	double radian = PI / 2;
	printf("����%f�� ����=%f\n", degree, deg2rad(degree));
	printf("���� %f�� ����=%f\n", radian, rad2deg(radian));
	return 0;
}
double rad2deg(double radian)
{
	return radian * 180 / PI;
}
double deg2rad(double degree)
{
	return degree * PI / 180;
}
