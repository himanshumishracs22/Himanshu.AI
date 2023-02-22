#include <stdio.h>
int main(){
float cm,meter,km;
printf("enter length in cm");
scanf("%f",&cm);
meter=cm/100.0;
km=cm/100000.0;
printf("length in meter=%.2f m\n",meter);
printf("length in kilometer=%.2f km\n",km);
return 0;
}
