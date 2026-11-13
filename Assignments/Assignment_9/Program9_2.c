#include<stdio.h>
///////////////////////
/*

    Function Name : DollarToINR
    Input : int
    Output : int
    Description : converting dollar to inr 
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

int DollarToINR(int iNo) {
    int iAns = 0;
    iAns = iNo * 70;
    return iAns;
}

int main() {
    int iValue = 0, iRet = 0;

    printf("Enter number of USD");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is: %d",iRet);

    return 0;
}