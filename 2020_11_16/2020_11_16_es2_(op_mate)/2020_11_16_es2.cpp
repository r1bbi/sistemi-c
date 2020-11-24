//Realizzare un programma che esegue la divisione di due numeri e stampa diversi risultati se sono numeri interi o in virgola mobile. 

#include <stdio.h>

int main() {

	int N1,N2;
	
	N1=6;
	N2=5;
	
	float r=N1/(float)N2;
	int R=N1/N2;
	
	printf("risultato con la virgola %f \n \r",r );
	printf("risultato senza virgola %d \n \r",R);
	
	
	return 0;
}
