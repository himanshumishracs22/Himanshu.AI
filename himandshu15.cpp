#include <stdio.h>
# include <math.h>
int main(){
	float side,area;
	printf("enter side of an equilateral triangle:");
	scanf("%f",&side);
	area=(sqrt(3)/4)*(side*side);
	printf("area of equilateral triangle=%.2f sq.units",area);
	return 0;
	}
