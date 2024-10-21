#include <stdio.h>

void matrix(int n, int adat[][n]){

    for(int i=0; i < n; i++){

        for(int j=0; j < n; j++){
            adat[i][j] = i*j;
        }
    
    }
}


int main(){

    int n = 3;
    int adat[3][3] = {{0}};
    
    matrix(n, adat);

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            printf(adat[i][j])
        }
    
    }
    return 0;
}