#include <stdio.h>
#include <math.h>
int main(){
	float principle,time,rate,CI;
	printf("enter principle (amount):");
	scanf("%f",&principle);
	printf("enter time:");
	scanf("%f",&time);
	printf("enter rate");
	scanf("%f",&rate);
	CI=principle*(pow((1+rate/100),time));
	printf("Compound interest=%f",CI);
	return 0;
}
