#include <stdio.h>
#include <stdlib.h>

///////////////////////
/*

    Function Name : checkAdmission
    Input : float, int
    Output : void
    Description : displaying if candidate is eligible for admission or not
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void checkAdmission(float fmarks, int iage){

    if(fmarks < 0 || fmarks > 100 || iage < 0){

        printf("the input is not valid \n");
    
    }else if(fmarks >= 60 && iage >= 17){

        printf("eligible for admission\n");
    
    }else{

        printf("not eligible for admission\n");
    }
}

int main(){

    float fmarks = 0.0f;
    int iage = 0;

    printf("enter marks and age: ");
    scanf("%f %d", &fmarks, &iage);

    checkAdmission(fmarks, iage);

    return EXIT_SUCCESS;
}
