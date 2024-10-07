#include <stdio.h>

int main(){
    char name[101];
    
    printf("Kérek egy szöveget:\n");
    fgets(name, 101, stdin);
    printf("%s\n", name);

}