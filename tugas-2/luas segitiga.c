#include <stdio.h>
#define dua 2

	int main (void){
	int a, t, luassegitiga;
	
	printf("perhitungan luas segitiga\n");
	printf("alas = ");
	scanf("%i", &a);
	printf("tinggi = ");
	scanf("%i", &t);
	
	luassegitiga = a*t/dua;
	printf("luas segitiga = %i\n", luassegitiga);
	system ("pause");
	return 0;
	}
