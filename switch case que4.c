//to find maximum between two numbers using switch case
#include<stdio.h>
int main(){
	int a,b;
	printf("enter any two integer:");
	scanf("%d %d",&a,&b);
	switch(a>b)
	{
		case 0:
			printf("%d is largest",b);
			break;
		case 1:
		    printf("%d is largest",a);
			break;	
	}
	return 0;
}
