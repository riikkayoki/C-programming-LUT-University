#include <stdio.h>
int main(void) {
/* Määritellään muuttujat */
int luku;
float liukuluku;
/* Nyt meillä on joukko muuttujia,
* käytetään niitä koodissa... */
luku = 5;
liukuluku = 8.234234645;
printf("Luku-muuttuja on %d.\n", luku);
printf("%d %f\n", luku, liukuluku);
return(0);
}

/*1. Muuttujat pitää määritellä aina ennen käyttöä. Määrittely sisältää kaksi asiaa: muuttujan
nimen ja sen tietotyyppi.
2. Muuttujan tietotyyppiä ei voi vaihtaa ohjelman suorituksen aikana*/