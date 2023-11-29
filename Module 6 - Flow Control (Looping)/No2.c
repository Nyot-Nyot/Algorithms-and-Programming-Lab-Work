#include <stdio.h>

int main(){
	//deklarasi
	int i, j;
	
	//interface
	printf("Pattern segitiga **\n");
	printf("=========================================\n");
	
	//statement
	for(i = 0;i <= 5;i++) {
		for(j = 0;j < i;j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
