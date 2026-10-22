#include <stdio.h>
#include <stdlib.h>

void calculateElectricityBill(int iunits)
{
    float fbill = 0.0f;

    if (iunits < 0){

        printf("the input is invalid \n");
    
    }else if (iunits <= 100){

        fbill = iunits * 5;
        
        printf("the bill is = %.2f\n", fbill);
    
    }else if (iunits <= 200){

        fbill = (100 * 5) + ((iunits - 100) * 7);
        
        printf("the bill is = %.2f\n", fbill);
    
    }else{
        
        fbill = (100 * 5) + (100 * 7) + ((iunits - 200) * 10);
        
        printf("the bill is = %.2f\n", fbill);
    }
}

int main(){

    int iunits = 0;

    printf("enter consumed units: ");
    scanf("%d", &iunits);

    calculateElectricityBill(iunits);

    return EXIT_SUCCESS;
}
