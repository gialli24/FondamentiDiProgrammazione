#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LENGTH 6

main () {
	char string[LENGTH];
	
	puts("Inserisci una stringa di massimo 5 caratteri");
	scanf("%s", string);
	
	int len = 0;
	int firstLetter = -5;
	while (string[len] != '\0') {
		if (isalpha(string[len]) && firstLetter < 0){
			firstLetter = len;
		}
		
		len++;
	}
	
	if (len < LENGTH) {
		int i = 0;
		for(i = firstLetter; i < len; i++) {
			if (i == firstLetter) {
				string[i] = toupper(string[i]);
			} else {
				string[i] = tolower(string[i]);
			}
		}
		
		printf("%s", string);
	} else {
		printf("La tua stringa supera il limite di %d caratteri \n", (LENGTH-1));
	}
}
