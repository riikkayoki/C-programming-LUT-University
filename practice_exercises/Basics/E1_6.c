#include <stdio.h>
#include <string.h>

int main(void) {
    char merkkijono[20] = "Kirsi Virtanen";
    printf("'%s'\n", merkkijono);
    strcpy(merkkijono, "Matti");
    printf("'%s'\n", merkkijono);
    merkkijono[5] = ' '; // Poistetaan Matti-sanan perästä loppumerkki
    printf("'%s'\n", merkkijono);
    return(0);
    }