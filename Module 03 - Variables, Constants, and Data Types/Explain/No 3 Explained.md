# Practice 3
Diketahui sebuah bola basket memiliki diameter 12 cm. Buatlah program dalam bahasa C untuk menghitung dan menampilkan volume dan luas permukaan dari bola tersebut. Gunakan konstanta untuk nilai Phi!

---
### Explain
Program ini adalah program sederhana dalam bahasa pemrograman C yang menghitung volume dan luas permukaan bola berdasarkan diameter yang dimasukkan oleh pengguna. Berikut adalah penjelasan singkat mengenai cara program ini bekerja:

1. **Deklarasi Konstanta dan Variabel:**
   ```c
   const float PI = 3.14;
   int diameter;
   float volume, luas;
   ```
   - `PI` dideklarasikan sebagai konstanta yang memiliki nilai 3.14.
   - `diameter` adalah variabel untuk menyimpan nilai diameter bola yang dimasukkan oleh pengguna.
   - `volume` dan `luas` adalah variabel untuk menyimpan hasil perhitungan volume dan luas permukaan bola.

2. **Input Diameter:**
   ```c
   printf("Diameter bola: ");
   scanf("%i", &diameter);
   ```
   - Program akan menampilkan pesan untuk meminta pengguna memasukkan nilai diameter bola.
   - Nilai yang dimasukkan oleh pengguna akan disimpan di variabel `diameter` menggunakan fungsi `scanf`.

3. **Perhitungan Volume dan Luas Permukaan:**
   ```c
   volume = 1.33333333 * PI * (diameter / 2) * (diameter / 2) * (diameter / 2);
   luas = 4 * PI * (diameter / 2) * (diameter / 2);
   ```
   - Rumus matematika untuk menghitung volume dan luas permukaan bola diterapkan dengan menggunakan nilai diameter yang dimasukkan oleh pengguna.
   - Perhatikan bahwa `(diameter / 2)` digunakan untuk menghitung jari-jari bola.

4. **Output Hasil Perhitungan:**
   ```c
   printf("Volume bola tersebut adalah %2.f \n", volume);
   printf("Luas permukaan bola tersebut adalah %2.f \n", luas);
   ```
   - Program akan menampilkan hasil perhitungan volume dan luas permukaan bola ke layar.

5. **Return 0:**
   ```c
   return 0;
   ```
   - Program mengembalikan nilai 0, menandakan bahwa program telah dijalankan tanpa kesalahan.
