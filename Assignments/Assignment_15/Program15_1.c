///////////////////////
/*

    Function Name : main
    Input : none
    Output : int
    Description : accept name from user and print that name
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

#include<stdio.h>

int main() {
    
    char Name[30];

    printf("Please enter full name:");
    scanf("%s", Name);

    printf("Your name is: %s", Name);

    return 0;
}