#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////
/*

    Function Name : checkEven
    Input : int
    Output : bool
    Description : to check if number is even
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

BOOL checkEven(int ino){

    if((ino % 2) == 0){

        return TRUE;
    
    }else{
        
        return FALSE;
    }
}

int main(){

    int ivalue = 0;
    BOOL bret = FALSE;

    printf("enter number: ");
    scanf("%d", &ivalue);

    bret = checkEven(ivalue);

    if(bret == TRUE){

        printf("the number is even...\n");
    
    }else{
        
        printf("the number is odd...\n");
    }

    return 0;
}