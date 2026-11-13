///////////////////////
/*

    Function Name : KMtoMeter
    Input : int
    Output : int
    Description : convert distance in kilometre into meter
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

#include<stdio.h>

int KMtoMeter(int iNo) {
    int iAns = 0;
    iAns = iNo * 1000;
    return iAns;
}

int main() {
    int iValue = 0, iRet = 0;

    printf("Enter distance");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d",iRet);

    return 0;
}