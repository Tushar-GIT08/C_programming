#include<stdio.h>

///////////////////////
/*

    Function Name : displayEvenFactor
    Input : int
    Output : void
    Description : displaying the even factors
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void displayEvenFactor(int ino){

    if(ino <= 0){

        ino = -ino;
    }

    int i = 0;

    for(i = 1 ; i <= ino ; i++){

        if((ino % i == 0) && (i % 2 == 0)) {

            printf("%d \t", i);

        }

    }

}

int main(){
    
    int ivalue = 0;

    printf("enter number: ");
    scanf("%d", &ivalue);

    displayEvenFactor(ivalue);

    return 0;
}