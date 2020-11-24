/* Dato un elenco di N dipendenti (inserito da tastiera) di un’azienda, calcolare
la somma degli stipendi dei dipendenti che hanno più di 20 anni di anzianità e
il nome del dipendente con maggiore anzianità. */
#include <stdio.h>
int main() {
 int N;
 int sum=0;
 int nome;
 int nomemax;
 int i;
 int age;
 int stipendio;
 int stipmax=0;

 printf("inserire numero dipendenti \n");
 scanf("%d\n", &N);
 for (i=0; i>=N; i++){
   printf("inserire età dipendente\n");
   scanf("%d\n", &age);
    if (age>20) {
      printf("inserire nome-cognome dipendente\n");
      scanf("%s\n", &nome);
      printf("inserire stipendio %s\n", nome);
      sum=sum+stipendio;

      if (stipendio>stipmax) {
        stipmax=stipendio;
        nomemax=nome;
        printf("per il momento &s ha lo stipendio maggiore\n", nomemax);
      }
    }
 }
 printf("Il dipendente con lo stipendio maggiore è: %s\n", nomemax);
 printf("la somma degli stipendi dei dipendenti con età maggiore di 20 anni è di: %d euro \n", sum);
 printf("fine programma\n");
 return 0;
}
