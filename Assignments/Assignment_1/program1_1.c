#include<stdio.h>

///////////////////////
/*

    Function Name : divide
    Input : Integer, Integer
    Output : Integer
    Description : Performs division
    Date : 22/10/2026
    Author : Tushar Dhanawade

*/

int divide(int ino1, int ino2){
    
    int ians = 0;

    if(ino2 == 0){

        return -1;
    }
    
    ians = ino1 / ino2;

    return ians;
}

int main(){

    int ivalue1 = 0, ivalue2 = 0;
    int iret = 0;

    printf("enter first number: \n");
    scanf("%d", &ivalue1);

    printf("enter second number: \n");
    scanf("%d", &ivalue2);

    iret = divide(ivalue1, ivalue2);

    if(iret == -1){

        printf("division by zero not allowed \n");

    }else{

        printf("division is: %d\n", iret);

    }

    return 0;
}
