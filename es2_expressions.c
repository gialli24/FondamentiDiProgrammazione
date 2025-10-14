/* 14/10/2025 - Gialli Andrea
Scrivere un programma per valutare espressioni.
*/

#include<stdio.h> //Per printf()

main() {
	puts("ESERCIZIO 2 14/10/2025"); //Va a capo altrimenti \n 
	printf("Valutazioe delle espressioni \n"); //Permette di visualizzare valori di variabili o espression al contrario di puts()

	int i = 4, j = 10, k, n;
	float x, y, z;
	
	x = i + 3.5 * j;
	printf("1 ESPRESSIONE \n x = i + 3.5 * j = %f \n", x);
	
	k = ( x - i ) / j;
	printf("2 ESPRESSIONE \n k = ( x - i ) / j = %d \n", k);
	
	y = ( x - i ) / j;
	printf("3 ESPRESSIONE \n y = ( x - i ) / j = %f \n", y);
	
	n = x - i / j;
	printf("4 ESPRESSIONE \n n = x - i / j = %d \n", n);
	
	z = x - i / j;
	printf("5 ESPRESSIONE \n z = x - i / j = %f \n", z);
	
	z = x - (float) i / j;
	printf("6 ESPRESSIONE \n z = x - (float) i / j = %f \n", z);
}
