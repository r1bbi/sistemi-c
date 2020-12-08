/*
Ribiani Enrico 3AUB 2020-12-08
Sia dato il seguente elenco di 7 prodotti: CAMICIA cod.0, PANTALONI cod.1,
CINTURA cod.2, SCARPE cod.3, CALZE cod.4, MAGLIONE cod.5, GIACCA
cod.6.
Per ogni prodotto il programma dovrà chiedere all’utente di inserire il prezzo.
Successivamente il programma chiederà ripetutamente all’utente/cassiere di
inserire il codice prodotto e la quantità. L’inserimento delle quantità termina
quando l’utente inserisce il codice -1. A questo punto il programma
visualizzerà il totale dei prodotti acquistati*/
#include <stdio.h>
#define COLONNE 7
#define RIGHE 3

int main(){
  int k,i;
  float prezzo[COLONNE];
  int codice_qt[RIGHE][COLONNE];
  //inserimento input e intestazione tui
  printf("____________ inizio programma____________ \n");
  printf("I codici dei 7 oggetti disponibili sono:\n-CAMICIA cod.0\n-PANTALONI cod.1\n-CINTURA cod.2\n-SCARPE cod.3\n-CALZE cod.4\n-MAGLIONE cod.5\n");
  for(k=0;k<COLONNE;k++)
  {//inizio for quantità
  printf("inserire prezzo prodotto codice %d\n", k);
  scanf("%f", &prezzo[k]);
  }//fine for quantità
  for ( i = 0; i < COLONNE; i++)
  {
    printf("inserire codice prodotto\n");
    scanf("%d", &codice_qt[0][i]);
    printf("inserire quantità oggetto codice %d\n", codice_qt[0][i]);
    if (codice_qt[0][i]==-1){//if che rompe il for in caso di quantità -1
      printf("fine inserimento dati\n");
      break;
    }
    scanf("%d", &codice_qt[1][i]);
    codice_qt[2][i]=codice_qt[1][i]*(prezzo[codice_qt[0][i]]);
  }
  //output
  for ( k = 0; k < RIGHE; k++)
  {//inzio for per regolare gli output
    switch (k)
    {//inizio switch per nominare ogni riga
      case 0:
      printf("\ncodice prodotto-->\t");
      break;
      case 1:
      printf("\nquantità-->\t\t");
      break;
      case 2:
      printf("\nprezzo totale €-->\t");
      break;
    }//fine switch
    for ( i = 0; i < COLONNE; i++)
    {//for che regola la stampa della matrice
        printf("________%d", codice_qt[k][i]);
    }
  }//fine for per regolare gli output
      printf("\n\n__________________________ fine programma__________________________");
      return 0;
}
