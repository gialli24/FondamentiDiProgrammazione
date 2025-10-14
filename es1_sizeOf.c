/* 14/10/2025 - Gialli Andrea
Scrivere un programma utilizzando il sizeof() per determinare l'occupazione in memoria dei tipi: char, int, float, double.
*/

#include<stdio.h> 

main() {
	puts("ESERCIZIO 1 14/10/2025"); //Va a capo altrimenti \n 
	printf("Analisi Occupazione di Memoria dei Tipi di Dato \n"); //Permette di visualizzare valori di variabili o espression al contrario di puts()
	
	char ch;
	printf("Un CHAR occupa %d bytes \n", sizeof(ch));
	
	int n;
	printf("Un INT occupa %d bytes \n", sizeof(n));
	
	long ln;
	printf("Un LONG INT occupa %d bytes \n", sizeof(ln));
	
	long long lln;
	printf("Un LONG LONG INT occupa %d bytes \n", sizeof(lln));
	
	short sn;
	printf("Un SHORT INT occupa %d bytes \n", sizeof(sn));
	
	float f;
	printf("Un FLOAT occupa %d bytes \n", sizeof(f));
	
	double d;
	printf("Un DOUBLE occupa %d bytes \n", sizeof(d));
}
