/*
	Scrivere un programma che dato un numero intero in ingresso lo converte in binario
*/

#include <stdio.h>

main(){
	int q, r;  
	
	puts("Inserisci un numero intero positivo:");
	scanf("%d", &q);
	
	while(q>0){
		r = q%2;
		printf("%d", r);
		q = q/2;
	}
	
}
