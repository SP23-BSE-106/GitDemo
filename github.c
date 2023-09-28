#include <stdio.h>
int main(void)
{
    int totalAmount;
    float charges,remainingAmount,yens,pounds;
    const float YEN_PER_USD = 127.65;
    const float POUND_PER_USD = 0.79f;
//prompt the user for the amount to be converted.
printf("Please provide the amount to be converted");
scanf("%i",&totalAmount);
charges= (10/100)* totalAmount;
remainingAmount= totalAmount - charges;
yens= (remainingAmount/2)* YEN_PER_USD;
pounds= ( remainingAmount/2)* POUND_PER_USD;
printf( "You will get %f yens and %f pounds after conversion",yens,pounds);
}

