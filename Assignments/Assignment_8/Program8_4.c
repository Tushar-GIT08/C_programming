#include<stdio.h>

///////////////////////
/*

    Function Name : Table
    Input : int
    Output : void
    Description : displaying multiplication table of number
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void Table(int iNo) {
    int iCnt = 0;

    if(iNo < 0) {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++) {
        printf("%d\t", iNo * iCnt);
    }
}

int main() {
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}