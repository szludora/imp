#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OFFSET 13;

char substitute(char c, int shift) {

    if(c >= 'a' && c <= 'z'){
        return 'a' + ((c-'a'+shift) % 26)
    }
    if(c >= 'A' && c <= 'Z'){
        return 'A' + ((c-'A'+shift) % 26)
    }
    return c;
}

int main() {
    int shift;

    printf("Eltolás:\n");
    scanf("%d", &shift);

    while((ch = getchar()) != EOF){
        printf("%c", substitute(ch, shift))
    }

    return 0;
}
