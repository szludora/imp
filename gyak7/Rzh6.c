#include <stdio.h>

double avg(int *begin, int *end){

    int sum = 0;

    while(*begin < *end){
        sum+=*begin;
        ++begin;
    }

    int n = end - begin;

    return sum / n;

}


int *max(int *begin, int *end){

    int *p = begin;

    while(begin<end){
        if(*begin > *p){
            p = begin;
        }    
        ++begin;
    }

    return p;
}


int main(){
    /* int x[4]= {2,1,3,4};
    printf("%d\n", *max(&x[0], &x[4])); */

    convertToDecimal();

    return 0;
}
