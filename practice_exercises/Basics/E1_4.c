#include <stdio.h>
int main(void) {
int luku;
printf("Anna kokonaisluku: ");
scanf("%d", &luku);
printf("Annoit luvun %d.\n", luku);
return(0);
}

/*scanf-käsky alkaa kertomalla, minkälaista tietoa se ottaa vastaan.*/

/*Formaatin osalta kokonaisluvut luetaan muotoilumerkillä
”%d”, liukuluvut ”%f” ja yksittäiset merkit ”%c”.*/