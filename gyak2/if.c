#include <stdio.h>

int main(){
    int x;
    x = 41;

    if(x % 2){

        printf("Páratlan\n");
    }
    else{
        printf("Páros\n");
        printf("A szám: %d\n", x);
    }

    return 0;
}