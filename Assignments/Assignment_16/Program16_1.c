///////////////////////
/*

    Function Name : Pattern
    Input : int, int
    Output : void
    Description : accept number of rows and columns and display character pattern
    Date : 12/11/2026
    Author : Tushar Dhanawade

*/
///////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol) {
    int i = 0, j = 0;
    char ch = '\0';
    
    if(iRow < 0) { 
        iRow = -iRow; 
    }
    
    if(iCol < 0) { 
        iCol = -iCol; 
    }
    
    for(i = 1; i <= iRow; i++) {
        for(j = 1, ch = 'A'; j <= iCol; j++, ch++) {
            printf("%c\t", ch);
        }
        printf("\n");
    }
}

int main() {
    
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}