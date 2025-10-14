/* 14/10/2025 - Gialli Andrea
Scrivere un programma per convertire Fahrenheit in Celsius e viceversa.
*/

// Tra Celsius e Fahrenheit c'è uno offset di 32
// I Celsius sono divisi in 100 parti mentre i Fahrenheit sono divisi in 180 parti

#include<stdio.h> //Per printf()
#define offset 32

main() {
	double input, output;
	int type;
	
	printf("Scegliere la conversione: \n 0 Da Celsius a Fahrenheit \n 1 Da Fahrenheit a Celsius \n");
	scanf("%d", &type); // La & è un operatore di indirizzamento
	
	if (type == 0) {
		printf("Gradi in Celsius: \n");
		scanf("%f", &input);
	
		output = ( input * 9/5 ) + offset;
	
		printf("Celsius %f = Fahrenheit %f", input, output);
	} else {
		printf("Gradi in Fahrenheit: \n");
		scanf("%f", &input);
		
		output = ( input - offset ) * 5 / 9;
	
		printf("Fahrenheit %f = Celsius %f", input, output);
	}
}
