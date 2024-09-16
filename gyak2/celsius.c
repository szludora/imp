#include <stdio.h>

int main(){
    

    for(int i = -20; i <= 200; i = i + 10){
       printf("%dF \t=\t%.2fC\n",i,(i-32)/1.8); 
    }   

    return 0;
}