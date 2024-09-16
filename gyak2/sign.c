#include <stdio.h>

int main(){

    int x;

    do{
        printf("Kérek egy páratlan számot:\n");
        scanf("%d", &x);
    }while(x % 2 == 0);

    return 0;
}