/*Dato un numero intero tra 1 e 12, che rappresenta il mese corrente,
stampare il nome del mese per esteso (�Gennaio� ... �Dicembre�). */

#include <stdio.h>
int main(){
	int n;
	int nmin=1;
	int nmax=12;
	
	printf("inserire il numero del mese: ");
	scanf("%d", &n);
	
	while ((n>=nmin) || (n>=nmax)) {

		printf("il numero inserito � fuori dai valori consentiti. \n \r");
		printf("\t reinserire numero.\n \r");
		scanf("%d", &n);
	}
	
	if (n=1) {
		printf("il mese � Gennaio \n \r");
	}
	if (n=2) {
		printf("il mese � Febbraio \n \r");
	}
	if (n=3) {
		printf("il mese Marzo X \n \r");
	}
	if (n=4) {
		printf("il mese � Aprile \n \r");
	}
	if (n=5) {
		printf("il mese Maggio X \n \r");
	}
	if (n=6) {
		printf("il mese � Giugno \n \r");
	}
	if (n=7) {
		printf("il mese � Luglio \n \r");
	}
	if (n=8) {
		printf("il mese � Agosto \n \r");
	}
	if( n=9) {
		printf("il mese � Settembre \n \r");
	}
	if (n=10) {
		printf("il mese � Ottobre \n \r");
	}
	if (n=11) {
		printf("il mese � Novembre \n \r");
	}
	if (n=12) {
		printf("il mese � Dicembre \n \r");
	}
	
	return 0;
}
