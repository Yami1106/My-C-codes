
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int main()
{
    int amount_given;
    int bill_amount,quotient,remainder;
    printf("Enter the amount:\n");
    scanf("%d",&amount_given);
    printf("Enter the bill amount:\n");
    scanf("%d",&bill_amount);
    quotient= (amount_given/bill_amount);
    remainder= (amount_given%bill_amount);
    printf("Quotient=%d\nRemainder=%d",quotient,remainder);
    return 0;
}



