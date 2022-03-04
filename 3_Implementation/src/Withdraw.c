#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"atm.h"

float moneyWithdraw(float balance)
 {
    float withdraw;
    bool back = true;

    printf(" Withdraw a money\n");
    printf("$ current Balance is: $%.2f\n\n", balance);

    while (back) {
    printf("Enter amount to withdraw:\n");
    scanf("%f", &withdraw);


    if (withdraw < balance) {
        back = false;
        balance -= withdraw;
        printf("\n$$$ withdrawing amount is:  $%.2f\n", withdraw);
        printf("** New Balance is:   $%.2f\n\n", balance);

    }

        else  {

        printf("There is no enough balance\n");
        printf(" contact to  Bank Customer Services \n");
        printf("current Balance is:   $%.2f\n\n", balance);

    }
    }
    return balance;


}