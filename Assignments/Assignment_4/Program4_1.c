#include <stdio.h>
#include <stdlib.h>

void checkNumber(int ivalue){
    
    if (ivalue > 0){
        
        printf("positive number\n");
    
    }else if (ivalue < 0){
        
        printf("negative number\n");
    
    }else{
        
        printf("zero\n");
    
    }
}

int main(){
    
    int ivalue = 0;

    printf("enter a number: ");
    scanf("%d", &ivalue);

    checkNumber(ivalue);

    return EXIT_SUCCESS;
}
