# Practice 1
Buatlah sebuah program untuk menghasilkan deret bilangan genap dan ganjil dari 0 – 50.

---
### Explain
Program ini mencetak deret bilangan ganjil dan genap dalam rentang 0 hingga 50. Berikut adalah penjelasan singkat mengenai cara program ini bekerja:

1. **Deklarasi Variabel:**
   ```c
   int i, j;
   ```
   - Variabel `i` dan `j` digunakan sebagai variabel iterasi dalam loop untuk mencetak deret bilangan ganjil dan genap.

2. **Header dan Pemisah:**
   ```c
   printf("Deret bilangan genap dan ganjil\n");
   printf("---------------------------------------\n");
   ```
   - Program menampilkan header dan garis pemisah untuk memisahkan antara deret bilangan ganjil dan genap.

3. **Cetak Deret Bilangan Ganjil:**
   ```c
   printf("Deret bilangan ganjil\n");
   for(i = 0 ; i <= 50 ; i++) {
       if(i % 2 == 1) {
           printf("%i, ", i);
       }
   }
   ```
   - Program menggunakan loop `for` untuk iterasi nilai `i` dari 0 hingga 50.
   - Dalam setiap iterasi, menggunakan kondisi `if` untuk memeriksa apakah nilai `i` ganjil (`i % 2 == 1`).
   - Jika iya, nilai `i` dicetak.

4. **Cetak Deret Bilangan Genap:**
   ```c
   printf("\nDeret bilangan genap\n");
   for(j = 0 ; j <= 50 ; j++) {
       if(j % 2 == 0) {
           printf("%i, ", j);
       }
   }
   ```
   - Program menggunakan loop `for` untuk iterasi nilai `j` dari 0 hingga 50.
   - Dalam setiap iterasi, menggunakan kondisi `if` untuk memeriksa apakah nilai `j` genap (`j % 2 == 0`).
   - Jika iya, nilai `j` dicetak.

5. **Return 0:**
   ```c
   return 0;
   ```
   - Program mengembalikan nilai 0, menandakan bahwa program telah dijalankan tanpa kesalahan.

Dengan cara ini, program mencetak deret bilangan ganjil dan genap dalam rentang 0 hingga 50 ke layar. Setiap deret bilangan dipisahkan dengan menggunakan header dan garis pemisah.
