/*
	M -> MASCHIO
	F -> FEMMINA
	
	et� > 65 anni � vecchio
*/

#include <stdio.h>

main() {
	puts("CONTROLLO UTENTE");
	
	int eta;
	char sesso;
	
	puts("Inserire il Sesso (F o M)");
	scanf("%c", &sesso);
	  
	puts("Inserire l\'eta ");
	scanf("%d", &eta);
	
	if (eta >= 65) {
		printf("L\'utente %c e vecchio", sesso);
	} else {
		printf("L\'utente %c e giovane", sesso);
	}
}
	
