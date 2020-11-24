/* Dati N valori di età di studenti, determinare il numero degli studenti
minorenni, il numero di coloro con età compresa tra 18 e 21 anni ed infine il
numero di quelli con età maggiore di 21 anni. Si calcoli inoltre l’età media. */

#include <stdio.h>

int main() {
//dichiarazione variabili
  int N;
  int age;
  int i;
  int sum=0;
  float med;
  int minori=0;
  int minore21=0;
  int max21=0;

  printf("inserire numero di studenti  \r \n");
  scanf("%d", &N);
  printf("  inserire numero negativo per uscire \r \n");
//divisione dei dati
  for (i = 1; i<=N ; i++) {
    printf("  inserire età studente %d \n \r ", i);
    scanf("%d", &age);

    while (age>0); {
      sum = sum + age;
      printf("numero valido \t \r \n");
      if (age>18){
        minori = minori + 1;
      }
      if ((age<=21) && (age>=18)) {
        minore21 = minore21 + 1;
      }
      if (age>21) {
        max21 = max21 + 1;
      }
    }
  }
//output
    med = sum/N;
    printf("la media è di %f \n \r", med);
    printf("il numero degli studenti minorenni è di %d \r \n", minori);
    printf("il numero degli studenti tra 18 e 21 anni è di %d \r \n", minore21);
    printf("il numero degli studenti con ètà maggiore di 21 anni è di %d \r \n", max21);
  return 0;
}
