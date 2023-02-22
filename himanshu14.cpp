#include <stdio.h>
int main(){
	float b,h,area;
	printf("enter base of a triangle:");
	scanf("%f",&b);
	printf("enter height of a triangle:");
	scanf("%f",&h);
	area=(b*h)/2;
	printf("area of the triangle=%.2f sq. units",area);
	return 0;
}
