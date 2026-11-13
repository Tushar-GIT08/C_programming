#include<stdio.h>

///////////////////////
/*

    Function Name : EvenFactorial
    Input : int
    Output : int
    Description : finding even factorial 
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////


int EvenFactorial(int iNo) {
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0) {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++) {
        if((iCnt % 2) == 0) {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main() {
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial is: %d",iRet);

    return 0;
}