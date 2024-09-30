#include <stdio.h>
#include <ctype.h>

int main(){

    int input;

    char to_lower(char ch){
        if('A' <= ch && ch <= 'Z'){
            return ch + ('a' - 'A');
        }
        return ch;
    }

    /* End Of File */
    while((input = getchar()) != EOF ){
        if(isupper(input)){
            printf("%c", tolower(input));
        }else if(islower(input)){
            printf("%c", toupper(input));
        }else{
            printf("%c", input);
        }
    }

    return 0;
}