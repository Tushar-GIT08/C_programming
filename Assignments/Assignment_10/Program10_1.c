///////////////////////
/*

    Function Name : CircleArea
    Input : float
    Output : double
    Description : calculate area of circle
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

#include<stdio.h>

double CircleArea(float fRadius) {
    double dArea = 0.0;
    dArea = 3.14 * fRadius * fRadius;
    return dArea;
}

int main() {
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf",dRet);

    return 0;
}