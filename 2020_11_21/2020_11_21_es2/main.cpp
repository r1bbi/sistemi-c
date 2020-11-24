
/* Data l’equazione ax + b = 0 con a e b inseriti da tastiera, scrivere un
programma in linguaggio C per determinare il valore di x, se esiste, che
risolve l’equazione. */
#include <stdio.h>
int main(){
//dichiarazione delle variabili
	int a;
	int b;
	int x=0;

	printf("inserire variabile a \n \r");
	scanf("%d", &a);
	
	printf("inserire variabile b \n \r");
	scanf("%d", &b);
//svolgimento operazioni
	x=-b/a;
	
	if (b>a){
		printf("il valore di x è %d \n \r", x); 
	}
	else{
		printf("il valore di x è %.2f \n\r", x);
	}
	return 0;
}
	

