#include <stdio.h>
#include <stdlib.h>

void checkDivisibility(int ivalue){
    
    if (ivalue % 5 == 0){
        
        printf("divisible by 5\n");
    
    }else{
        
        printf("not divisible by 5\n");
    
    }
}

int main(){
    
    int ivalue = 0;

    printf("enter a number: ");
    scanf("%d", &ivalue);

    checkDivisibility(ivalue);

    return EXIT_SUCCESS;
}
