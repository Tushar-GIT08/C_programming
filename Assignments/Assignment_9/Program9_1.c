#include<stdio.h>

///////////////////////
/*

    Function Name : Display
    Input : int
    Output : void
    Description : displaying * # pattern
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void Display(int iNo) {
    
    int iCnt = 0;
    
    if(iNo < 0) {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++) {
        printf("* ");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++) {
        printf("# ");
    }
}

int main() {
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}