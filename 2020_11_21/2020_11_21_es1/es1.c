#include <stdio.h>

int main(){
	int n;
	printf("inserire il numero");
	scanf("%d", &n);
	
	if (n>0){
		printf("il numero � positivo");
	}
	else{
		printf("il numero � negativo o uguale a zero");
	}
	return 0;
}
