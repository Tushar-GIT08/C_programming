#include <stdio.h>
#include <stdlib.h>

///////////////////////
/*

    Function Name : checkNumber
    Input : int
    Output : void
    Description : checking if number is positive, negative or zero
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////


void checkNumber(int ivalue){
    
    if (ivalue > 0){
        
        printf("positive number\n");
    
    }else if (ivalue < 0){
        
        printf("negative number\n");
    
    }else{
        
        printf("zero\n");
    
    }
}

int main(){
    
    int ivalue = 0;

    printf("enter a number: ");
    scanf("%d", &ivalue);

    checkNumber(ivalue);

    return EXIT_SUCCESS;
}
