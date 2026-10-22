#include <stdio.h>
#include <stdlib.h>

///////////////////////
/*

    Function Name : calculateDiscount
    Input : float
    Output : void
    Description : displaying final amount based on discounts
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void calculateDiscount(float famount){

    float fdiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (famount < 0){

        printf("invalid amount\n");
    
    }else if (famount >= 5000){

        fdiscount = famount * 20 / 100;
    
        fFinalAmount = famount - fdiscount;
    
        printf("amount to be paid = %.2f\n", fFinalAmount);
    
    }else if (famount >= 1000){

        fdiscount = famount * 10 / 100;
        
        fFinalAmount = famount - fdiscount;
        
        printf("amount to be paid = %.2f\n", fFinalAmount);
    
    }else{

        fFinalAmount = famount;
    
        printf("amount to be paid = %.2f\n", fFinalAmount);
    }
}

int main(){

    float famount = 0.0f;

    printf("enter purchase amount: ");
    scanf("%f", &famount);

    calculateDiscount(famount);

    return EXIT_SUCCESS;
}
