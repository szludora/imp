#include <stdio.h>

int main(){
  
    int n[] = {1,2,10,24,22,14};

    int fst;
    int snd;

    if(n[0] < n[1]){
        fst = n[1];
        snd = n[0];
    }


    for(int i = 0; i < sizeof(n)/sizeof(n[0]); i++){
        if(fst > n[i]){
            snd = fst;
            fst = n[i];
        }else if(n[i] < snd){
            snd = n[i];
        }
    }
    printf("\n%d\n\n", snd);
}