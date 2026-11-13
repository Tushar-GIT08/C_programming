///////////////////////
/*

    Function Name : ChkGreater
    Input : int
    Output : BOOL
    Description : check whether number is greater than 100
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkGreater(int iNo) {
    
    if(iNo > 100) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main() {
    
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE) {
        printf("Greater");
    } else {
        printf("Smaller");
    }

    return 0;
}