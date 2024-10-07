#include <stdio.h>

int main(){
  
    int n[] = {1,2,3,4,5};

    int res = 0;
    for(int i = 0; i < sizeof(n)/sizeof(n[0]); i++){
        res = res + n[i];
    }

    printf("%d\n", res);
}