#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LENGTH 20

main () {
	char nome[LENGTH];
	char cognome[LENGTH];
	char iniziali[5];
	
	/*puts("Inserisci un Nome");
	scanf("%s", nome);
	
	puts("Inserisci un Cognome");
	scanf("%s", cognome);
	
	iniziali[0] = toupper(nome[0]);
	iniziali[1] = '.';
	iniziali[2] = toupper(cognome[0]);
	iniziali[3] = '.';
	iniziali[4] = '\0';
	
	printf("%s \n\n", iniziali); */
	
	// METODO 2
	char nomecognome[LENGTH];
	char iniziali2[5];
	
	puts("Inserisci Nome e Cognome");
	fgets(nomecognome, LENGTH, stdin);
	
	int i = 0;
	int k = 0;
	while(nomecognome[i] != '\n') {
		if (i == 0 || nomecognome[i-1] == ' ') {
			iniziali2[k++] = toupper(nomecognome[i]);
			iniziali2[k++] = '.';
		}
		i++;
	}
	
	printf("%s", iniziali2);
}
