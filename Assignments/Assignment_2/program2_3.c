#include<stdio.h>

///////////////////////
/*

    Function Name : display
    Input : int
    Output : void
    Description : display hello if input < 10 else demo
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void display(int ino){

    if(ino < 10){

        printf("hello \n");
    
    }else{

        printf("demo \n");

    }

}

int main(){
    
    int ivalue = 0;

    printf("enter number: ");
    scanf("%d", &ivalue);

    display(ivalue);

    return 0;
}