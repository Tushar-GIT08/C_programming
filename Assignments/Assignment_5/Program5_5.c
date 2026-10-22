#include <stdio.h>
#include <stdlib.h>

///////////////////////
/*

    Function Name : checkCharacterType
    Input : char
    Output : void
    Description : displaying if character is uppercase, lowercase, digit or special character
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void checkCharacterType(char cvalue){

    if (cvalue >= 'A' && cvalue <= 'Z'){

        printf("it is uppercase alphabet\n");
    
    }else if (cvalue >= 'a' && cvalue <= 'z'){

        printf("it is lowercase alphabet\n");
    
    }else if (cvalue >= '0' && cvalue <= '9'){

        printf("it is digit\n");
    
    }else{

        printf("it is special character\n");
    }
}

int main(){

    char cvalue;

    printf("enter a character: ");
    scanf(" %c", &cvalue);

    checkCharacterType(cvalue);

    return EXIT_SUCCESS;
}
