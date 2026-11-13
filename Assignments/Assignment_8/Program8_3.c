#include<stdio.h>

///////////////////////
/*

    Function Name : Factorial
    Input : int
    Output : int
    Description : finding factorial of a number
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

int Factorial(int iNo) {
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0) {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++) {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main() {
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial is: %d", iRet);

    return 0;
}