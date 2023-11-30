# Practice 3
Buatlah sebuah program untuk menampilkan keluaran sebagai berikut:

1<br>
2 4<br>
3 6 9<br>
4 8 12 16<br>
5 10 15 20 25<br>

---
### Explained
Program ini mencetak pola deret kelipatan dengan menggunakan nilai dari hasil perkalian dan penambahan. Berikut adalah penjelasan singkat mengenai cara program ini bekerja:

1. **Deklarasi Variabel:**
   ```c
   int i, j, kali;
   ```
   - Variabel `i` dan `j` digunakan sebagai variabel iterasi dalam loop untuk membentuk pola deret kelipatan.
   - Variabel `kali` digunakan untuk menyimpan hasil perkalian dan penambahan pada setiap langkah iterasi.

2. **Header:**
   ```c
   printf("==========Pattern deret kelipatan==========\n");
   ```
   - Program menampilkan header untuk menandakan bahwa pola deret kelipatan akan dicetak.

3. **Loop untuk Membentuk Pola Deret Kelipatan:**
   ```c
   for(i = 1; i <= 5; i++) {
       printf("%d ", i);
       for(j = 1; j < i; j++) {
           kali = (i * j) + i;
           printf("%d ", kali);
       }
       printf("\n");
   }
   ```
   - Program menggunakan loop pertama (`for`) dengan variabel `i` untuk mengontrol jumlah baris pada deret kelipatan.
   - Di setiap iterasi `i`, program mencetak nilai `i` terlebih dahulu.
   - Program menggunakan loop kedua (`for`) dengan variabel `j` untuk menghasilkan deret kelipatan dengan menggunakan rumus `(i * j) + i`.
   - Setelah mencetak setiap nilai kelipatan, program pindah ke baris baru menggunakan `printf("\n")`.

4. **Output:**
   ```
   1 
   2 4
   3 6 9
   4 8 12 16
   5 10 15 20 25
   ```
   - Output dari program menunjukkan deret kelipatan yang dibentuk sesuai dengan aturan perkalian dan penambahan.

5. **Return 0:**
   ```c
   return 0;
   ```
   - Program mengembalikan nilai 0, menandakan bahwa program telah dijalankan tanpa kesalahan.

Dengan cara ini, program mencetak pola deret kelipatan dengan menggunakan rumus `(i * j) + i` untuk setiap nilai `i` dan `j` yang sesuai.
