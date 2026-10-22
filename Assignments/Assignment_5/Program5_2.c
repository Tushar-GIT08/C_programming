#include <stdio.h>
#include <stdlib.h>

///////////////////////
/*

    Function Name : checkLeapYear
    Input : int
    Output : void
    Description : displaying if given year is a leap year or not
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void checkLeapYear(int iyear){

    if ((iyear % 400 == 0) || ((iyear % 4 == 0) && (iyear % 100 != 0))){

        printf("it is a leap year\n");
    
    }else{

        printf("it is not a leap year\n");
    
    }
}

int main(){

    int iyear = 0;

    printf("enter year: ");
    scanf("%d", &iyear);

    checkLeapYear(iyear);

    return EXIT_SUCCESS;
}
