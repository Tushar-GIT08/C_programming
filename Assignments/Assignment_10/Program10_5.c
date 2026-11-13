///////////////////////
/*

    Function Name : SquareMeter
    Input : int
    Output : double
    Description : convert area in square feet into square meter
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

#include<stdio.h>

double SquareMeter(int iValue) {
    double dSquareMeter = 0.0;
    dSquareMeter = iValue * 0.0929;
    return dSquareMeter;
}

int main() {
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf",dRet);

    return 0;
}