#include <stdio.h>

int main(){



    for(int i = 1; i < 11; ++i){
        for(int x = 1; x < 11; ++x){
        printf("%d\t",x*i);
        }
        printf("\n");
    }   

    return 0;
}