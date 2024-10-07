#include <stdio.h>

int main(){
  
    int n[] = {1,2,10,24,22,14};
    int res = 0;

    for(int i = 0; i < sizeof(n)/sizeof(n[0]); i++){
        if(res < n[i]){
            res = n[i];
        }
    }
    printf("\n%d\n", res);
}