/*Scrivere un programma che, dato un numero intero N, stampi il fattoriale di
N. (N!=fattoriale di N = Prodotto dei numeri naturali da 1 a N. Ad esempio 3!=1*2*3=6) */

#include <stdio.h>

int main(){
	int N;
	int i;
	int p=1;
	printf("inserire N \n \r");
	scanf("%d", &N);
	 for (i=1;i<=N;i++){
	 	p=p*i;
	 }
	printf("il fattoriale di N vale: %d \t \n", p);
	return 0;
}
