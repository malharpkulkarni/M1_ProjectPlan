#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"atm.h"

float moneyDeposit(float balance)
 {
    float deposit;
    printf(" Deposit a money\n");
    printf("$ Balance is: $%.2f\n\n", balance);
    printf("***Enter amount to Deposit\n");
    scanf("%f", &deposit);


    balance += deposit;

    printf("\n*** New Balance is:   $%.2f\n\n", balance);
    return balance;

}