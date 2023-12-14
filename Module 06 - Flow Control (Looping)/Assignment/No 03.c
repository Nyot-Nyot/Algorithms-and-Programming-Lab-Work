#include <stdio.h>

int main(){
	//deklarasi
	int i, j, kali;
	
	//interface
	printf("==========Pattern deret kelipatan==========\n");
	
	//satement
	for(i = 1;i <= 5;i++) {
		printf("%d ", i);
		for(j = 1;j < i;j++) {
			kali = (i * j) + i;
			printf("%d ", kali);
		}
		printf("\n");
	}

	return 0;
}
