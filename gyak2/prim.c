#include <stdio.h>

int main(){
    
    int osztok = 0;

    for(int i = 2; i <= 1000; i++){

        for(int x = 1; x <= i; x++){

            if(i%x == 0){
                osztok++;
            }
        }

        if(osztok == 2){
            printf("%d\t", i);

        }

        osztok = 0;
    }   

    return 0;
}