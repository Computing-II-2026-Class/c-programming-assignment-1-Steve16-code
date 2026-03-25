/* Name: ODORA STEPHEN*/
/* student Number: 25/U/BIO/01411/PD*/

#include<stdio.h>
int main(){

float distance_travelled, fuel_used, fuel_efficiency;

printf("Enter distance (km): " );
scanf("%f", &distance_travelled);

printf("Enter fuel_used (litres): ");
scanf("%f", &fuel_used);

fuel_efficiency=distance_travelled/fuel_used;
printf("\nfuel_efficiency (km/l): %.2f\n", fuel_efficiency);
return 0;
}
