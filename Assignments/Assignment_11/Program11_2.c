///////////////////////
/*

    Function Name : RangeDisplayEven
    Input : int, int
    Output : void
    Description : display all even numbers in between range
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd) {
    int iCnt = 0;
    if(iStart > iEnd) {
        printf("Invalid range");
        return;
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++) {
        if((iCnt % 2) == 0) {
            printf("%d ", iCnt);
        }
    }
}

int main() {
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}