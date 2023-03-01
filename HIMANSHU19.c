#include <stdio.h>
int main(){
	int a,b,c,max;
	printf("enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	max= (a>b&&a>c)?a:(b>c)?b:c;
	printf("maximum number between %d,%d and %d is %d\n",a,b,c,max);
	return 0;
}
