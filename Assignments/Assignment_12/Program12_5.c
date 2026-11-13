///////////////////////
/*

    Function Name : Count
    Input : int
    Output : int
    Description : count frequency of digits less than 6
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

#include<stdio.h>

int Count(int iNo) {
    
    int iDigit = 0;
    int iCnt = 0;
    
    if(iNo < 0) {
        iNo = -iNo;
    }
    
    while(iNo > 0) {
        iDigit = iNo % 10;
        if(iDigit < 6) {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}

int main() {
    
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;
}