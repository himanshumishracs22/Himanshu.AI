//program no.4
#include <stdio.h>
int main(){
	int length,width,perimeter;
	printf("enter length of rectangle");
	scanf("%d",&length);
	printf("enter width of rectangle");
	scanf("%d",&width);
	perimeter=2*(length*width);
	printf("perimeter of  rectangle=%d ",perimeter);
	return 0;
}
