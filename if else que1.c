#include<stdio.h>
int main(){
	int a,b;
	printf("enter two integers\n");
	scanf("%d %d",&a,&b);
	if (a>b){
		printf("%d is largest\n",a);
	}else if(b>a){
		printf("%d is largest\n",b);
	}else {
		printf("both are equal");
	} 
	return 0;
}
