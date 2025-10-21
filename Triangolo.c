#include <stdio.h>

main() {
	int lato1, lato2, lato3;
	
	puts("Inserire il lato 1");
	scanf("%d", &lato1);
	
	puts("Inserire il lato 2");
	scanf("%d", &lato2);
	
	puts("Inserire il lato 3");
	scanf("%d", &lato3);
	
	int ipotenusa, base, altezza;
	if (lato1 > lato2) {
		if (lato1 > lato3) {
			ipotenusa = lato1;
			base = lato2;
			altezza = lato3;
		} else {
			ipotenusa = lato3;
			base = lato2;
			altezza = lato1;
		}
	} else {
		if (lato2 > lato3) {
			ipotenusa = lato2;
			base = lato1;
			altezza = lato3;
		} else {
			ipotenusa = lato3;
			base = lato2;
			altezza = lato1;
		}
	}
	
	printf("Ipotenusa: %d \n", ipotenusa);
	
	float area = ( base * altezza ) / 2;
	printf("Area: %f \n", area);
}
