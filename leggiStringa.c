#include <stdio.h>
#include <string.h>
#define LENGTH 6

main () {
	char string[LENGTH];
	
	puts("Inserisci una stringa di massimo 5 caratteri");
	scanf("%s", string);
	
	int i = 0;
	while (string[i] != '\0') {
		i++;
	}
	
	if (i < LENGTH) {
		printf("La tua stringa %s e\' lunga: %d caratteri \n", string, i);
		
		// LIBRERIA STRING.H
		int lunghezza = strlen(string);
		printf("Lunghezza con libreria: %d", lunghezza);
	} else {
		printf("La tua stringa supera il limite di %d caratteri \n", (LENGTH-1));
	}
	
}
