#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    const int szam= 3;
    int x;
    
    do{
        x = rand() % 20;
        printf("kitalálandó: %d\ntipped: %d\n", szam, x);
    }
    while(x != szam);

    printf("Kitaláltad... :D\n");
    
    return 0;
}