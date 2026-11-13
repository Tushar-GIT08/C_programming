///////////////////////
/*

    Function Name : RangeDisplayRev
    Input : int, int
    Output : void
    Description : display all numbers in between range in reverse order
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd) {
    int iCnt = 0;
    if(iStart > iEnd) {
        printf("Invalid range");
        return;
    }
    for(iCnt = iEnd; iCnt >= iStart; iCnt--) {
        printf("%d ", iCnt);
    }
}

int main() {
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}