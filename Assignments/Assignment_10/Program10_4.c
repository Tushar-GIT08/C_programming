///////////////////////
/*

    Function Name : FhtoCs
    Input : float
    Output : double
    Description : convert temperature in Fahrenheit into celsius
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

#include<stdio.h>

double FhtoCs(float fTemp) {
    double dCelsius = 0.0;
    dCelsius = (fTemp - 32) * (5.0 / 9.0);
    return dCelsius;
}

int main() {
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius is %lf",dRet);

    return 0;
}