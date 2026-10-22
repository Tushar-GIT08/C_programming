#include<stdio.h>

///////////////////////
/*

    Function Name : accept
    Input : int
    Output : void
    Description : displaying * as per user input
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void accept(int ino){

    int icnt = 0;

    for(icnt = 1; icnt <= ino; icnt++){

        printf("*");
    }
}

int main(){
    
    int ivalue = 0;

    printf("enter number: ");
    scanf("%d", &ivalue);

    accept(ivalue);

    return 0;
}