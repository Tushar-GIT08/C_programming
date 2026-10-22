#include <stdio.h>
#include <stdlib.h>

///////////////////////
/*

    Function Name : checkTriangle
    Input : int, int, int
    Output : void
    Description : displaying if given triangle is valid
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/
///////////////////////

void checkTriangle(int iside1, int iside2, int iside3){
    
    if (iside1 > 0 && iside2 > 0 && iside3 > 0){

        if((iside1 + iside2 > iside3) && (iside1 + iside3 > iside2) && (iside2 + iside3 > iside1)){

            printf("valid triangle\n");
        
        }else{

            printf("invalid triangle\n");
        
        }
    
    }else{

        printf("invalid triangle\n");
    
    }
}

int main(){

    int iside1 = 0, iside2 = 0, iside3 = 0;

    printf("enter three sides: ");
    scanf("%d %d %d", &iside1, &iside2, &iside3);

    checkTriangle(iside1, iside2, iside3);

    return EXIT_SUCCESS;
}
