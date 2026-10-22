#include <stdio.h>
#include <stdlib.h>

///////////////////////
/*

    Function Name : checkVotingEligibility
    Input : int
    Output : void
    Description : displaying if candidate is eligible to vote or not
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////


void checkVotingEligibility(int iage){
    
    if (iage >= 18){

        printf("Eligible for voting\n");
    }
    
    else if ((iage < 18) && (iage < 0)){
        
        printf("invalid age\n");
    
    }else{
        
        printf("not eligible for voting\n");
    
    }
}

int main(){

    int iage = 0;

    printf("enter your age: ");
    scanf("%d", &iage);

    checkVotingEligibility(iage);

    return EXIT_SUCCESS;
}
