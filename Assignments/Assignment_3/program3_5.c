#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////
/*

    Function Name : checkVowel
    Input : char
    Output : bool
    Description : check whether character input is vowel or not
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

BOOL checkVowel(char cvalue){

    if (cvalue == 'a' || cvalue == 'e' || cvalue == 'i' || cvalue == 'o' || cvalue == 'u' ||
        cvalue == 'A' || cvalue == 'E' || cvalue == 'I' || cvalue == 'O' || cvalue == 'U') {
            
        return TRUE;
    
    }else{
        
        return FALSE;
    }
}

int main(){

    char cvalue = '\0';
    BOOL bret = FALSE;

    printf("enter character: ");
    scanf("%c", &cvalue);

    bret = checkVowel(cvalue);

    if(bret == TRUE){

        printf("it is a vowel...\n");
    
    }else{
        
        printf("it is not a vowel...\n");
    }

    return 0;
}