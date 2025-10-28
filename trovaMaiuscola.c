# include <stdio.h>

main () {
	char ch;
	int count = 0;
	
	//termina con punto .
	puts("Scrivi un testo e quando hai finito premi punto .");
	
	do {
		ch = getchar(); //scanf("%c", &ch);
		
		if (ch >= 'A' && ch <= 'Z') {
			count++;
		}	
		
	} while (ch != '.');
	
	printf("Maiuscole = %d", count);
}
