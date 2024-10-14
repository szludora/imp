#include <stdio.h>

int main(){

    int a[] = { 1, 3, 3, 7 };
    int b[] = { 9, 8, 7, 6 };

    int res = 0;
    int res2 = 0;

    for(int i=0; i < 4; i++){
        res = res + a[i] * b[i];
    }

    printf("\nskaláris szorzat:\t%d\n", res);

    for(int i=0; i < 4; i++){
        res2 = b[i] * res;
        printf("%d\t", res2);
    }
    printf("\n\n");


    return 0;
}