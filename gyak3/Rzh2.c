#include <stdio.h>

int main(){
    int i, a, b;

    printf("Kérek egy egész számot:\na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    
    if(a < b)
    for(i = a; i <= b;i++){
        printf("\n%d", i);
    }
    else if(a > b)
        for(i = b; i <= a;i++){
        printf("\n%d", i);
    }else{
        printf("A számok egyenlőek voltak...\nA számok a következőek voltak: %d, %d", a, b);
    }

    printf("\n\n");

    return 0;
}