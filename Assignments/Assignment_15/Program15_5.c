///////////////////////
/*

    Function Name : Percentage
    Input : float, float
    Output : float
    Description : calculate percentage from total and obtained marks
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

#include<stdio.h>

float Percentage(float Total, float Obtained) {
    
    if(fTotal == 0.0) {
        return 0.0;
    }
    
    return (Obtained / Total) * 100.0;
}

int main() {
    
    float fValue1 = 0.0, fValue2 = 0.0;
    float fRet = 0.0;

    printf("Enter total marks");
    scanf("%f",&fValue1);

    printf("Enter obtained marks");
    scanf("%f",&fValue2);

    fRet = Percentage(fValue1, fValue2);

    printf("%f", fRet);

    return 0;
}