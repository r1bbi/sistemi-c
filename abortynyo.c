/*Sia dato il seguente elenco di 7 prodotti: CAMICIA cod.0, PANTALONI cod.1,
CINTURA cod.2, SCARPE cod.3, CALZE cod.4, MAGLIONE cod.5, GIACCA
cod.6.
Per ogni prodotto il programma dovrà chiedere all’utente di inserire il prezzo.
Successivamente il programma chiederà ripetutamente all’utente/cassiere di
inserire il codice prodotto e la quantità. L’inserimento delle quantità termina
quando l’utente inserisce il codice -1. A questo punto il programma
visualizzerà il totale dei prodotti acquistati*/
#include <stdio.h>
#define RIGHE 3
#define COLONNE 7

int main(){
  float prezzo_0, prezzo_1, prezzo_2, prezzo_3, prezzo_4, prezzo_5, prezzo_6;
  int k,quantità;
  float matrice[RIGHE][COLONNE];
  int array[7];
  char codice;
  //inserimento input
  printf("____________ inizio programma____________ \n");
  printf("I codici dei 7 oggetti disponibili sono:\n-CAMICIA cod.0\n-PANTALONI cod.1\n-CINTURA cod.2\n-SCARPE cod.3\n-CALZE cod.4\n-MAGLIONE cod.5\n");
  for(k=0;k<6;k++)
  {//inizio for
    printf("\ninserire prezzo prodotto codice %d\n", k);
    scanf("%d", array[k]);
  }//fine for
  printf("vediamosefreezza\n");
  for (int i = 0; i < COLONNE; i++)
  {//inizio for matrice risultato
      printf("inserire codice prodotto\ninserire codice -1 per uscire");
      scanf("&int", matrice[0][i]);
          for (k = 0; k < 2; k++)
          {
            printf("inserire quantità prodotto %d\n",k);
            scanf("&f", matrice[1][k]);
            if (matrice[1][k]==-1)
            {
              break;
              break;
            }
          }
  }//fine for matrice risultato
//output
for (int i = 0; i < COLONNE; i++)
{
  if (i=0)
  {
    printf("codice prodotto\t");
  }
  if (i=1)
  {
    printf("quantità\t");
  }
  for (k = 0; k < RIGHE; k++)
        {
          printf("%.2f", matrice[k][i]);
        }
return 0;
}
}
