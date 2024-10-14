#include <stdio.h>

int fv(int *tomb, int *hossz){
    
    printf("%d\n%d\n", *tomb, *hossz);

    return 0;
}

int main(){

    int tomb[] = {1,2,3,4};
    int hossz = 3;

    int *tomb = &tomb;
    int *hossz = &hossz;

    fv(*tomb, *hossz);


    return 0;
}