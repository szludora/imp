#include <stdio.h>

/*
-1 a  <  b
 0   ==
 1 a  >  b
*/

int compare(char *a, char *b){

    int i = 0;

    while(a[i] != '\0' && b[i] != '\0'){
        if(a[i] < b[i])
            return -1;
        if(a[i] > b[i])
            return 0;
    }

    if(a[i] == '\0' && b[i] == '\0')
        return 0;
    if(a[i] == '\n')
        return -1;
    return 1;
}
