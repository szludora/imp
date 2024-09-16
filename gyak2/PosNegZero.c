#include <stdio.h>

int main(){
    int x;

    printf("Adj meg egy számot: \n");
    scanf("%d", &x);

    if(x < 0)
        printf("Negatív\n");
    else if (x > 0)
        printf("Pozitív\n");
    else
        printf("Nulla\n");
    return 0;
}