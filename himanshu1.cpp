//program no.3
#include<stdio.h>
int main(){
	int a,b;
	int sum,sub,mul,mod;
	float div;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	mod=a%b;
	div=(float)a/b;
	printf("addition of %d+%d=%d",a,b,sum);
	printf("subtarction of%d-%d=%d",a,b,sub);
	printf("multiplication of %d*%d=%d",a,b,mul);
	printf("modulus of %d%%%d=%d",a,b,mod);
	printf("division of %d/%d=%d",a,b,div);
	return 0;
}
