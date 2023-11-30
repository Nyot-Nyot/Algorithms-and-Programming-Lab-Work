# Practice 2
Buatlah sebuah program untuk menghasilkan program dengan keluaran sebagai berikut:

*<br>
**<br>
***<br>
****<br>
*****<br>

---
### Explain
Program ini mencetak pola segitiga dengan menggunakan karakter '*' (bintang). Berikut adalah penjelasan singkat mengenai cara program ini bekerja:

1. **Deklarasi Variabel:**
   ```c
   int i, j;
   ```
   - Variabel `i` dan `j` digunakan sebagai variabel iterasi dalam loop untuk membentuk pola segitiga.

2. **Header:**
   ```c
   printf("Pattern segitiga **\n");
   printf("=========================================\n");
   ```
   - Program menampilkan header untuk menandakan bahwa pola segitiga akan dicetak.

3. **Loop untuk Membentuk Pola Segitiga:**
   ```c
   for(i = 0;i <= 5;i++) {
       for(j = 0;j < i;j++) {
           printf("*");
       }
       printf("\n");
   }
   ```
   - Program menggunakan loop pertama (`for`) dengan variabel `i` untuk mengontrol jumlah baris pada segitiga.
   - Di setiap iterasi `i`, program menggunakan loop kedua (`for`) dengan variabel `j` untuk mencetak karakter '*' sebanyak `i`.
   - Setelah mencetak '*' sebanyak `i`, program pindah ke baris baru menggunakan `printf("\n")`.

4. **Return 0:**
   ```c
   return 0;
   ```
   - Program mengembalikan nilai 0, menandakan bahwa program telah dijalankan tanpa kesalahan.

Dengan cara ini, program mencetak pola segitiga yang bertingkat dengan karakter '*' pada setiap barisnya. Jumlah '*' pada setiap baris sesuai dengan nilai `i` pada iterasi tertentu dari loop pertama. Outputnya akan tampak seperti berikut:

```
*
**
***
****
*****
```
