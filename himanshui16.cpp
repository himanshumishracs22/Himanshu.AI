#include <stdio.h>
int main(){
	float eng,phy,chem,math,comp;
	float total,average,percentage;
	printf("enter marks of 5 subjects:\n");
	scanf("%f%f%f%f%f",&eng,&phy,&chem,&math,&comp);
	total=eng+phy+chem+math+comp;
	average=total/5.0;
	percentage=(total/500.0)*100;
	printf("total marks=%.2f\n",total);
	printf("average marks=%.2f\n",average);
	printf("percentage=%.2f",percentage);
	return 0;
}
