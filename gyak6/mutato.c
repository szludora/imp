#include <stdio.h>


int main(){

    int szam = 1;
    int szam2 = 2;
    int *p = &szam;
    int **p2 = &p;

    printf("%d\n", szam);
    printf("%d\n", *p);

    **p2=10;
    *p2 = &szam2;

    printf("%d\n", szam);
    printf("%d\n", *p);

    return 0;
}
