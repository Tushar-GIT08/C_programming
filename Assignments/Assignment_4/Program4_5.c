#include <stdio.h>
#include <stdlib.h>

///////////////////////
/*

    Function Name : checkDivisibility
    Input : int
    Output : void
    Description : displaying if number is divisible by 5 or not
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void checkDivisibility(int ivalue){
    
    if (ivalue % 5 == 0){
        
        printf("divisible by 5\n");
    
    }else{
        
        printf("not divisible by 5\n");
    
    }
}

int main(){
    
    int ivalue = 0;

    printf("enter a number: ");
    scanf("%d", &ivalue);

    checkDivisibility(ivalue);

    return EXIT_SUCCESS;
}
