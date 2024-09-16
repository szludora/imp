#include <stdio.h>

int main(){

    for(double i = 0.0; i <= 1; i = i + 0.1){
        printf("%.2f\t", i);
    }   
    printf("\n");

    return 0;
}