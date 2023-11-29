# Practice 4
Buatlah program untuk menghitung luas persegi panjang dengan panjang = 10 cm, dan lebar = 5 cm.

---
### Explain
```c
	int panjang = 10;
	int lebar = 5;
```
Program C ini menghitung luas persegi panjang. Program ini dimulai dengan menentukan dimensi persegi panjang: 10 cm untuk panjang dan 5 cm untuk lebar.<br><br>

```c
	printf("Luas Persegi \n");
	printf("-----------------------------------------\n");
	printf("Diketahui panjang = 10cm \n");
	printf("Diketahui lebar = 5 cm\n");
	printf("Rumusnya adalah panjang * lebar\n");
	printf("-----------------------------------------\n");
```
Selanjutnya, program ini mencetak nama rumus luas yang digunakan: "Luas Persegi Panjang". Rumus ini didefinisikan sebagai mengalikan panjang dan lebar persegi panjang.<br><br>

```c
	int luas = panjang * lebar;
```
Kemudian, program mengalikan nilai panjang dan lebar secara bersamaan dan menyimpan hasilnya dalam variabel 'luas'.<br><br>

```c
	printf("Luas persegi jika diketahui panjang = %i cm dan lebar = %i cm adalah %i", panjang, lebar, luas);
```
Terakhir, program mencetak luas persegi panjang yang dihitung, yang menyatakan bahwa jika panjangnya 10 cm dan lebarnya 5 cm, luasnya sama dengan nilai variabel 'luas'.<br><br>
