#include<stdio.h>

///////////////////////
/*

    Function Name : FactorialDiff
    Input : int
    Output : int
    Description : difference between even factorial and odd factorial
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

int FactorialDiff(int iNo) {
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    
    if(iNo < 0) {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++) {
        if((iCnt % 2) == 0) {
            iEvenFact = iEvenFact * iCnt;
        } else {
            iOddFact = iOddFact * iCnt;
        }
    }
    
    return (iEvenFact - iOddFact);
}

int main() {
    int iValue = 0,iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("the factorial difference is: %d",iRet);

    return 0;
}