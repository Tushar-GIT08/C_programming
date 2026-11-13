#include<stdio.h>

///////////////////////
/*

    Function Name : Number
    Input : int
    Output : void
    Description : displaying small, medium or large
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void Number(int iNo) {
    if(iNo < 50) {
        printf("Small");
    }
    else if(iNo < 100) {
        printf("Medium");
    }
    else {
        printf("Large");
    }
}

int main() {
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}