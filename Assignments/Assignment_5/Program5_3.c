#include <stdio.h>
#include <stdlib.h>

///////////////////////
/*

    Function Name : displayGrade
    Input : float
    Output : void
    Description : displaying the grade of student
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void displayGrade(float fmarks){

    if (fmarks < 0 || fmarks > 100){
        printf("the marks are invalid\n");
    
    }else if (fmarks >= 90){
        
        printf("grade A\n");
    
    }else if (fmarks >= 75){
        
        printf("grade B\n");
    
    }else if (fmarks >= 60){
        
        printf("grade C\n");
    
    }else if (fmarks >= 40){
        
        printf("grade D\n");
    
    }else{
        
        printf("failed \n");
    
    }
}

int main()
{
    float fmarks = 0.0f;

    printf("enter marks: ");
    scanf("%f", &fmarks);

    displayGrade(fmarks);

    return EXIT_SUCCESS;
}
