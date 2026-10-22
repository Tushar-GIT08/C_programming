#include <stdio.h>
#include <stdlib.h>

///////////////////////
/*

    Function Name : findGreater
    Input : int, int
    Output : void
    Description : displaying greater number from 2 numbers
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////


void findGreater(int ifirst, int isecond){

    if (ifirst > isecond){

        printf("%d is greater\n", ifirst);
    
    }else if (isecond > ifirst){

        printf("%d is greater\n", isecond);
    
    }else{
        
        printf("both numbers are equal\n");
    }
}

int main(){

    int ivalue1 = 0, ivalue2 = 0;

    printf("enter two numbers: ");
    scanf("%d %d", &ivalue1, &ivalue2);

    findGreater(ivalue1, ivalue2);

    return EXIT_SUCCESS;
}
