#include<stdio.h>

///////////////////////
/*

    Function Name : display
    Input : int
    Output : void
    Description : displaying * as per user input
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void display(int ino){

    while(ino > 0){

        printf("*");
        ino--;
    }
}

int main(){
    
    int ivalue = 0;

    printf("enter number: ");
    scanf("%d", &ivalue);

    display(ivalue);

    return 0;
}