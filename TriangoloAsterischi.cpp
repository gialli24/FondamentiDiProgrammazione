#include <stdio.h>

main() {
	int altezza, larghezza;
	char ch;
	
	puts("Inserisci un Carattere");
	scanf("%c", &ch);
	
	puts("Inserisci l\'Altezza del Rettangolo");
	scanf("%d", &altezza);
	
	puts("Inserisci la Larghezza del Rettangolo");
	scanf("%d", &larghezza);
	
	puts("\n");
	
	for (int i=0; i<altezza; i++) {
		for (int j=0; j<larghezza; j++) {
			if (j == larghezza-1) {
				printf("%c\n", ch);
			} else {
				printf("%c", ch);
			}
		}
	}
	
	puts("\n");
	
	for (int i=0; i<altezza; i++) {
		for (int j=0; j<larghezza; j++) {
			if (i==0 || i==altezza-1) {
				if (j == larghezza-1) {
					printf("%c\n", ch);
				} else {
					printf("%c", ch);
				}
			} else {
				if (j==0) {
					printf("%c", ch);
				} else if (j==larghezza-1) {
					printf("%c\n", ch);
				} else {
					printf(" ");
				}
			}
		}
	}
	
	puts("\n");
	
	for (int i=0; i<altezza; i++) {
		for (int j=0; j<larghezza; j++) {
			if (j == (int) (larghezza / 2) + i) {
				printf("%c", ch);
			} else if (j == (int) (larghezza / 2) - i) {
				printf("%c", ch);
			} else {
				if (j == larghezza-1) {
					printf(" \n");
				} else {
					printf(" ");
				}
			}
		}
	}
}
