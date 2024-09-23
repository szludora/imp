#include <stdio.h>

int main(){

    int x;

    printf("Kérek egy évszámot:\n");
    scanf("%d", &x);

    /*
    eldöntő (ternáris operátor) ? :
    */

    printf((((x % 4 == 0) && (x % 100 != 0)) || x % 400 == 0 ) ? "szökőév\n" : "nem szökőév\n");

    /*
    oszthatóság
    szökőév: 4, 400 szökőév
    nem szökőév: 100

    szökőév: 2024, 2000
    nem szökőév: 1900, 2025
    */

    if((x % 4 == 0 && x % 100 ) ||  x % 400 == 0){
        printf("szökőév\n");
    }else{
        printf("nem szökőév\n");
    }
    return 0;
}