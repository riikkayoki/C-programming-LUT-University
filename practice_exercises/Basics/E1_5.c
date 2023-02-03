#include <stdio.h>
int main(void) {
/* Määritellään muutama merkkijono ja apumuuttujia. */
char nimi[30];

/*char nimi[30];
Tällä käskyllä määrittelemme merkkitaulukon nimi, johon on varattu tilaa 30 merkkiä (taulukon
paikat 0-29)*/

char ammatti[] = "Palomies";

/*Nyt määrittelemme merkkitaulukon ammatti, johon on varattu tilaa juuri sen verran kuin
merkkijono ”Palomies” tarvitsee. Kääntäjä laskee merkkijonon pituuden, lisää siihen loppumerkin
tarvitseman tilan ja varaa tarvittavan taulukon.*/

char harrastus[30] = "autot";
int koko;

/*Merkkijono harrastus, jossa on tilaa 30 merkille ja josta
olemme ottaneet käyttöön merkkijonon ”autot” tarvitseman tilan. Lopuksi luomme vielä
kokonaislukumuuttujan koko, johon selvitämme yhden merkkitaulukon varaaman tilan määrän*/

/* Nyt meillä on merkkijonoja, käytetään niitä vähän. */
printf("Anna nimi (max. 29 merkkiä): ");
scanf("%s", nimi);

/*”%s” eli merkkijonolle. */

koko = sizeof(harrastus);
printf("%s on %s.\n", nimi, ammatti);
printf("Harrastuksenaan hänellä on %s.\n", harrastus);
printf("Sanalle '%s' on varattu %d merkkiä.\n", harrastus, koko);
return(0);
}