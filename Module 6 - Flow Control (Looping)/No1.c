#include <stdio.h>

int main(){
	//deklarasi
	int i, j;
	
	//interface
	printf("Deret bilangan genap dan ganjil\n");
	printf("---------------------------------------\n");
	
	//statement
	printf("Deret bilangan ganjil\n");
	for(i = 0 ; i <= 50 ; i++) {
		if(i % 2 == 1) {
			printf("%i, ", i);
		}
	}
	
	printf("\nDeret bilangan genap\n");
	for(j = 0 ; j <= 50 ; j++) {
		if(j % 2 == 0) {
			printf("%i, ", j);
		}
	}
	
	return 0;
}
