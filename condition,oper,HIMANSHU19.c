#include <stdio.h>
int main(){
	int a,b,max;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	max=(a>b)?a:b;
	printf("maximum number between %d and %d is %d\n",a,b,max);
	return 0;
}
