#include<stdio.h>

///////////////////////
/*

    Function Name : TableRev
    Input : int
    Output : void
    Description : displaying multiplication table in reverse order
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void TableRev(int iNo) {
    int iCnt = 0;

    if(iNo < 0) {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--) {
        printf("%d\t", iNo * iCnt);
    }
}

int main() {
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}