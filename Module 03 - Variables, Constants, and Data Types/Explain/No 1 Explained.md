# Practice 1
Buatlah sebuah program konversi mata uang Rupiah (Rp) ke mata uang Dollar ($)! jika, 1$ = Rp. 14.250.<br><br>
Kasus:<br>
Anda mempunyai jasa money changer, kemudian ada yang meminta penukaran uang rupiah ke dolar, berapa dollar yang harus anda berikan kepada si penukar untuk Rp. 2.500.000?<br>
Hitung menggunakan program yang anda buat!<br>

---
### Explain
Program C ini adalah konverter uang yang memungkinkan pengguna untuk mengonversi uang mereka dari Rupiah (IDR) ke Dolar (USD) atau sebaliknya. Program ini meminta pengguna untuk memilih jenis konversi dan memasukkan jumlah uang yang ingin dikonversi. Kemudian, aplikasi ini akan menghitung jumlah yang setara dalam mata uang lainnya.

Berikut ini adalah rincian langkah demi langkah tentang cara kerja kode tersebut:<br><br>

```c
	char uang;
	float rupiah, dollar;
```
Program ini pertama-tama mendeklarasikan variabel dengan tipe data yang berbeda: char (untuk input pengguna), float (untuk jumlah mata uang).<br><br>

```c
	printf("Money changer:)\n");
	printf("------------------------------------------------\n");
	printf("Kamu mau menukar ke mata uang apa?\n");
	printf("Pilih R untuk mengonversikan uang anda ke Rupiah\n");
	printf("Pilih D untuk mengonversikan uang anda ke Dollar\n");
	printf("ketik: r/d \n"); //r untuk rupiah sedangkan d untuk dollar
	scanf("%s", &uang);
```
Program ini mencetak pesan selamat datang dan meminta pengguna untuk memilih jenis konversi. Pengguna diharapkan untuk memasukkan 'r' atau 'R' untuk Rupiah, dan 'd' atau 'D' untuk Dolar.<br>

Program akan membaca input pengguna dan menyimpannya dalam variabel 'uang'.<br>

Bergantung pada pilihan pengguna, program akan meminta mereka untuk memasukkan jumlah uang yang ingin dikonversi. Program akan membaca input pengguna dan menyimpannya dalam variabel 'rupiah' atau 'dollar'.<br><br>

```c
	if (uang == 'r' || uang == 'R'){
		printf("Masukkan jumlah uang Anda: $\n");	
		scanf("%f", &rupiah);
		rupiah = rupiah * 14250;
		
		if (rupiah == (int)rupiah){
			printf("Uang anda dalam rupiah adalah %.0f", rupiah);
		}
		else {
			printf("Uang anda dalam rupiah adalah %.3f", rupiah);
		}
	}
```
Jika pengguna memilih untuk mengonversi dari Rupiah ke Dolar, program akan menghitung jumlah yang setara dengan membagi jumlah Rupiah dengan 14250 (nilai tukar pada saat program ini ditulis). Hasilnya disimpan dalam variabel 'dollar'.<br><br>

```c
	else if (uang == 'd' || uang =='D'){
		printf("Masukkan jumlah uang Anda: Rp\n");	
		scanf("%f", &dollar);
		dollar = dollar / 14250;
		
		if (dollar == (int)dollar){
			printf("Uang anda dalam rupiah adalah %.0f", dollar);
		}
		else {
			printf("Uang anda dalam rupiah adalah %.3f", dollar);
		}
	}
```
Jika pengguna memilih untuk mengkonversi dari Dolar ke Rupiah, program akan menghitung jumlah yang setara dengan mengalikan jumlah Dolar dengan 14250 (nilai tukar pada saat penulisan). Hasilnya disimpan dalam variabel 'rupiah'.

Program kemudian mencetak jumlah yang setara dalam mata uang lainnya. Jika jumlahnya adalah bilangan bulat, program akan mencetak angka tersebut tanpa desimal. Jika tidak, program akan mencetak angka tersebut dengan tiga angka di belakang koma.<br><br>

```c
	else {
		printf("Maaf, kami tidak melayani jenis uang tersebut :(");
	}
```
Jika pengguna memasukkan pilihan yang tidak didukung, program akan mencetak pesan kesalahan dan tidak melakukan konversi apa pun.<br>

Catatan: Kode ini mengasumsikan nilai tukar statis 14.250 Rupiah ke 1 Dolar, yang mungkin tidak akurat secara real-time. Untuk aplikasi di dunia nyata, akan lebih baik menggunakan API atau library untuk mengambil nilai tukar saat ini.
