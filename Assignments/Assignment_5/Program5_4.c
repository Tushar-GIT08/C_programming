#include <stdio.h>
#include <stdlib.h>

void checkMultipleDivisibility(int ivalue)
{
    if (ivalue % 3 == 0 && ivalue % 5 == 0){

        printf("divisible by both\n");
    
    }else if (ivalue % 3 == 0){

        printf("divisible by 3 only\n");
    
    }else if (ivalue % 5 == 0){

        printf("divisible by 5 only\n");
    
    }else{
        
        printf("not divisible by either\n");
    }
}

int main(){

    int ivalue = 0;

    printf("enter number: ");
    scanf("%d", &ivalue);

    checkMultipleDivisibility(ivalue);

    return EXIT_SUCCESS;
}
