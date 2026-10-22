#include<stdio.h>

///////////////////////
/*

    Function Name : display
    Input : int, int
    Output : void
    Description : display number based on frequency
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void display(int ino, int ifrequency){

    for(int icnt = 0; icnt < ifrequency; icnt++){

        printf("%d \t", ino);

    }

}

int main(){

    int ivalue = 0;
    int icount = 0;

    printf("enter number: ");
    scanf("%d", &ivalue);

    printf("enter frequency: ");
    scanf("%d", &icount);

    display(ivalue, icount);

    return 0;
}