#include <stdio.h>
int main(){
	float celsius,farenheit;
	printf("enter temperature in farenheit");
	scanf("%f",&farenheit);
	celsius=(farenheit - 32)*5/9;
	printf("%.2f fahrenheit=%.2f celsius",farenheit,celsius);
	return 0;
}
