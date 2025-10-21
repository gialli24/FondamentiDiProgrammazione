#include <stdio.h>

main() {
	int val;
	
	puts("Inserire il valore rilevato");
	scanf("%d", &val);
	
	if (val <= 50) {
		printf("Tranquillo");
	} else if (val <= 70) {
		printf("Percepito");
	} else if (val <= 90) {
		printf("Fastidioso");
	} else if (val <= 110) {
		printf("Molto Fastidioso");
	} else {
		printf("Insopportabile");
	}
}
