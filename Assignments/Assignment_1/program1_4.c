#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////
/*

    Function Name : check
    Input : int
    Output : bool
    Description : to check number is divisible by 5 or not
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

BOOL check(int ino){

    if((ino % 5) == 0){

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

    bret = check(ivalue);

    if(bret == TRUE){

        printf("divisible by 5 \n");
    
    }else{
        
        printf("not divisible by 5 \n");
    }

    return 0;
}