#include <stdio.h>
int main(){
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	(ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')?printf("it is an alphabet"):printf("it is not an alphabet");
	return 0;
}
