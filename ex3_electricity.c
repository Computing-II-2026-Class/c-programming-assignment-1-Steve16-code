/*Name: ODORA STEPHEN*/
/*Student Number: 25/U/BIO/01411*/

#include<stdio.h>
int main(){

float units_consumed, cost_per_unit, total_electricity;
printf("Enter units consumed: ");
scanf("%f", &units_consumed);
printf("Enter cost per unit: ");
scanf("%f", &cost_per_unit);
total_electricity=units_consumed*cost_per_unit;
printf("\ntotal bill: %.2f\n UGX",total_electricity );
return 0;
}
