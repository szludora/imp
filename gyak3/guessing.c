#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMIT 100;

int get_target(){
    return rand() % LIMIT;
}

int main(){
    srand(time(NULL));
    const int target = get_target();
    int tipp;
    
    do{
        printf("Tipp: ");
        scanf("%d", &tipp);
        printf("%s\n a kitalálandó számtól, ami: \n%d\n", (target < tipp) ? "nagyobb" : "kisebb", target);
    }
    while(tipp != target);

    printf("Kitaláltad... :D\n");
    
    return 0;
}