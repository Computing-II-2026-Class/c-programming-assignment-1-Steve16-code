/* Name: ODORA STEPHEN*/	
/* Student Number: 25/U/BIO/01411/PD*/

#include<stdio.h>
int main(){

    float amount, fee_percent, fee, total;

    printf("Enter the amount to send: ");
    scanf("%f", &amount);

    printf("Enter the transaction fee (%%): ");
    scanf("%f", &fee_percent);

    fee= (fee_percent/100) * amount;
    total = amount+fee;
    
    printf("\ntransaction fee: %.2f UGX\n", fee);
    printf("Total deducted: %.2f UGX\n", total);
    return 0;
	
}



