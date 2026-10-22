#include <stdio.h>
#include <stdlib.h>

void calculateBonus(float fsalary, int iyears)
{
    float fbonus = 0.0f;

    if (fsalary <= 0 || iyears < 0){
        printf("enter the valid input\n");
        return; 
    }

    if (iyears > 10){
        
        fbonus = fsalary * 15 / 100;
    
    }else if (iyears >= 5){
        
        fbonus = fsalary * 10 / 100;
    
    }else{
        
        fbonus = fsalary * 5 / 100;
    
    }

    printf("bonus = %.2f\n", fbonus);
}

int main(){
    float fsalary = 0.0f;
    int iyears = 0;

    printf("enter salary and years of service: ");
    scanf("%f %d", &fsalary, &iyears);

    calculateBonus(fsalary, iyears);

    return EXIT_SUCCESS;
}
