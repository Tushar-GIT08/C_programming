#include<stdio.h>

///////////////////////
/*

    Function Name : printEven
    Input : int
    Output : void
    Description : print number of even numbers as given in input
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void printEven(int ino){

    if(ino <= 0){

        return;
    }

    int icnt = 0;

    for(icnt = 2 ; ino > 0 ; icnt += 2){

        printf("%d \t", icnt);

        ino--;
    }

}

int main(){
    
    int ivalue = 0;

    printf("enter number: ");
    scanf("%d", &ivalue);

    printEven(ivalue);

    return 0;
}