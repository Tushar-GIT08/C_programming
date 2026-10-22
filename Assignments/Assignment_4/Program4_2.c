#include <stdio.h>
#include <stdlib.h>

void checkEvenOdd(int ivalue){

    if (ivalue % 2 == 0){

        printf("it is even number\n");
    
    }else{
        
        printf("it is odd Number\n");
    }
}

int main(){
    
    int ivalue = 0;

    printf("enter a number: ");
    scanf("%d", &ivalue);

    checkEvenOdd(ivalue);

    return EXIT_SUCCESS;
}
