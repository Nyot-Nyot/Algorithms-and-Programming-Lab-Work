# Practice 1
Buatlah sebuah program kalkulator sederhana yang terdiri dari beberapa pilihan operasi pada menu utama yaitu:<br>
a) Penjumlahan<br>
b) Pengurangan<br>
c) Perkalian<br>
d) Pembagian<br>
e) Hasil Bagi<br>
Kemudian setiap pilihan akan meminta inputan dua buah bilangan yang diinput melalui keyboard dan memberikan hasil dari operasi yang dipilih!

---
### Explain
Program ini adalah kalkulator sederhana yang memungkinkan pengguna melakukan berbagai operasi aritmatika seperti penjumlahan, pengurangan, perkalian, pembagian, dan hasil bagi. Pengguna memilih operasi yang diinginkan dengan memasukkan angka sesuai petunjuk yang diberikan. Berikut adalah penjelasan singkat mengenai cara program ini bekerja:

1. **Deklarasi Variabel:**
   ```c
   int Operator, number1, number2, hasil;
   ```
   - `Operator` adalah variabel untuk menyimpan pilihan operasi yang diinginkan oleh pengguna.
   - `number1` dan `number2` adalah variabel untuk menyimpan dua angka yang akan dioperasikan.
   - `hasil` adalah variabel untuk menyimpan hasil operasi.

2. **Tampilan Menu dan Input Pilihan Operator:**
   ```c
   printf("Kalkulator sederhana\n");
   // ... (menampilkan petunjuk dan menu)
   printf("masukkan pilihan anda: ");
   scanf("%i", &Operator);
   ```
   - Program menampilkan menu operasi kepada pengguna.
   - Pengguna diminta memasukkan pilihan operasi dalam bentuk angka.
   - Input pilihan disimpan dalam variabel `Operator`.

3. **Pemilihan Operasi dengan `switch`:**
   ```c
   switch(Operator) {
		case 1:
			printf("Masukkan angka pertama: ");
			scanf("%i", &number1);
			printf("Masukkan angka kedua: ");
			scanf("%i", &number2);
			hasil = number1 + number2;
			printf("%i + %i = %i", number1, number2, hasil);
			break;
			
		case 2:
			printf("Masukkan angka pertama: ");
			scanf("%i", &number1);
			printf("Masukkan angka kedua: ");
			scanf("%i", &number2);
			hasil = number1 - number2;
			printf("%i - %i = %i", number1, number2, hasil);
			break;
		
		case 3:
			printf("Masukkan angka pertama: ");
			scanf("%i", &number1);
			printf("Masukkan angka kedua: ");
			scanf("%i", &number2);
			hasil = number1 * number2;
			printf("%i * %i = %i", number1, number2, hasil);
			break;
			
		case 4:
			printf("Masukkan angka pertama: ");
			scanf("%i", &number1);
			printf("Masukkan angka kedua: ");
			scanf("%i", &number2);
			hasil =  number1 / number2;
			printf("%i / %i = %i", number1, number2, hasil);
			break;
			
		case 5:
			printf("Masukkan angka pertama: ");
			scanf("%i", &number1);
			printf("Masukkan angka kedua: ");
			scanf("%i", &number2);
			hasil = number1 % number2;
			printf("%i %% %i = %i", number1, number2, hasil);
			break;
		
		default:
			printf("pilihan tidak valid :)");
			break;
   }
   ```
   - Program menggunakan struktur kontrol `switch` untuk mengevaluasi nilai dari `Operator`.
   - Setiap kasus (case) dalam `switch` sesuai dengan pilihan operasi yang mungkin.

4. **Input Angka dan Perhitungan:**
   ```c
   case 1:
       // ... (meminta dan menyimpan angka, melakukan penjumlahan, dan menampilkan hasil)
       break;
   // ... (kondisi untuk operasi lainnya)
   ```
   - Setiap kasus dalam `switch` meminta pengguna memasukkan dua angka yang akan dioperasikan.
   - Berdasarkan operasi yang dipilih, program melakukan perhitungan menggunakan operasi aritmatika yang sesuai.
   - Hasil perhitungan disimpan dalam variabel `hasil`.

5. **Output Hasil Operasi:**
   ```c
   printf("%i + %i = %i", number1, number2, hasil);
   // ... (output untuk operasi lainnya)
   ```
   - Program menampilkan hasil operasi ke layar dengan format yang sesuai.

6. **Return 0:**
   ```c
   return 0;
   ```
   - Program mengembalikan nilai 0, menandakan bahwa program telah dijalankan tanpa kesalahan.

Dengan cara ini, program memberikan fungsionalitas kalkulator sederhana kepada pengguna dengan memungkinkan mereka memilih operasi yang diinginkan dan melakukan perhitungan aritmatika.
