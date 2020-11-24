//Realizzare un programma che assegna a una variabile float il valore 5.4, ne calcola il quadrato e stampa il risultato nel formato: 5 cifre prima dello zero, tre cifre dopo lo zero.

#include <stdio.h>

int main() {

	float N1,r;
	N1=5.4;
	r=N1*(float)N1;
	printf("risultato= %09.3f \n \r",r);

		return 0;
}


