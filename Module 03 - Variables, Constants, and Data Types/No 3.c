#include <stdio.h>

int main(){
	//konstanta
	const float PI = 3.14;

	//deklarasi
	int diameter;
	float volume, luas;
	
	//interface
	printf("Program menghitung volume dan luas permukaan bola");
	printf("-------------------------------------------------\n");
	printf("Diameter bola: ");
	scanf("%i", &diameter);
	
	//operasi
	volume = 1.33333333 * PI * (diameter / 2) * (diameter / 2) * (diameter / 2);
	luas = 4 * PI * (diameter / 2) * (diameter / 2);
	
	//output
	printf("Volume bola tersebut adalah %2.f \n", volume);
	printf("Luas permukaan bola tersebut adalah %2.f \n", luas);
	
	return 0;
}
