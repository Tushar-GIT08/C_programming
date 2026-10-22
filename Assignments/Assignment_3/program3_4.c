#include<stdio.h>

///////////////////////
/*

    Function Name : displayConvert
    Input : char
    Output : void
    Description : convert smallcase to uppercase and uppercase to smallcase
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void displayConvert(char cvalue){

    if(cvalue >= 'a' && cvalue <= 'z'){

        printf("%c ", cvalue - 32);

    }else if(cvalue >= 'A' && cvalue <= 'Z'){

        printf("%c ", cvalue + 32);

    }

}

int main(){
    
    char cvalue = '\0';

    printf("enter character : \n");
    scanf("%c", &cvalue);

    displayConvert(cvalue);

    return 0;
}