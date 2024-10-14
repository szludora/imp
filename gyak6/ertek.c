#include <stdio.h>


int main(){

    int tomb[] = {0,0,0,0};
    int *p = tomb;

    *(p+1)=1;

    printf("%d\n", tomb[1]);

    return 0;
}
