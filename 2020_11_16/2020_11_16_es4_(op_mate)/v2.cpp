//
// Created by rib on 16/11/20.
// Realizzare un programma che acquisisca un numero x e stampi il valore della funzione y(x)=3x^2+2

#include <stdio.h>
#include <math.h>

int main(){
    int x,y,z;
    scanf("inserire la variabile x %d",x );
    z=pow(x,2.0);
    y=3*z+2;
    printf("il valore della funzione y(x)=3x^2+2 è \n \r",y);


    return 0;
}


