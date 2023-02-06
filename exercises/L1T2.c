/*Tee C-ohjelma, joka kysyy käyttäjältä kaksi lukua ja tulostaa ne. Ensimmäinen luku on
kokonaisluku ja toinen liukuluku. Luvut talletetaan muuttujiin, joita käytetään niiden
tulostamiseen. Tulosta liukuluku kahden desimaalin tarkkuudella.*/


#include <stdio.h>

int main(void) {
    int kokonaisluku;
    float liukuluku;
    printf("Anna kokonaisluku: ");
    scanf("%d", &kokonaisluku);
    printf("Anna liukuluku: ");
    scanf("%f", &liukuluku);
    printf("Annoit luvut %d ja %.2f.", kokonaisluku, liukuluku);
    return 0;
}
