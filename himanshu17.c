#include <stdio.h>
int main(){
	float principle,time,rate,SI;
	printf("enter principle (amount):");
	scanf("%f",&principle);
	printf("enter time:");
	scanf("%f",&time);
	printf("enter rate");
	scanf("%f",&rate);
	SI=(principle*time*rate)/100;
	printf("Simple interest=%f",SI);
	return 0;
}
