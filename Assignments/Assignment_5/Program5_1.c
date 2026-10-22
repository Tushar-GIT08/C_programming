#include <stdio.h>
#include <stdlib.h>

void findGreatest(int ifirst, int isecond, int ithird){

    if (ifirst >= isecond && ifirst >= ithird){

        printf("%d is greatest\n", ifirst);
    
    }else if (isecond >= ifirst && isecond >= ithird){

        printf("%d is greatest\n", isecond);
    
    }else{
    
        printf("%d is greatest\n", ithird);
    
    }
}

int main(){

    int ivalue1 = 0, ivalue2 = 0, ivalue3 = 0;

    printf("enter three numbers: ");
    scanf("%d %d %d", &ivalue1, &ivalue2, &ivalue3);

    findGreatest(ivalue1, ivalue2, ivalue3);

    return EXIT_SUCCESS;
}
