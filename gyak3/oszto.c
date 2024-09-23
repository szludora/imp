#include <stdio.h>

int divisor(int szam){

    int k;
    for(int i = 2; i < szam; ++i){
        if(szam % i == 0){
            k = i;
            break;
        }
    }
    return k;
}

int main(){
    printf("45 osztója: %d\n", divisor(45));
    return 0;
}