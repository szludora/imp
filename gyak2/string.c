#include <stdio.h>

int main(){

    // \0-ra végződik a string, tehát ebben az esetben csak 9 karakterű tömböt tudunk létrehozni
    char nev[10];
    printf("Hogy hívnak?\n");
    scanf("%s", nev);
    printf("Szia %s!\n", nev);

    return 0;
}