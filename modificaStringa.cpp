#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LENGTH 6

main () {
	char string[LENGTH];
	
	puts("Inserisci una stringa di massimo 5 caratteri");
	scanf("%s", string);
	
	int len = 0;
	while (string[len] != '\0') {
		len++;
	}
	
	
	if (len < LENGTH) {
		int i = 0;
		for(i = 0; i < len; i++) {
			if ( 
				tolower(string[i]) == 'a' || 
				tolower(string[i]) == 'e' || 
				tolower(string[i]) == 'i' || 
				tolower(string[i]) == 'o' || 
				tolower(string[i]) == 'u'
			) {
				string[i] = '*';
			}
		}
		
		printf("%s", string);
	} else {
		printf("La tua stringa supera il limite di %d caratteri \n", (LENGTH-1));
	}
}
