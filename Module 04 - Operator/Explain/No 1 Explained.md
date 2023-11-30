# Practice 1
Buatlah program konversi detik kedalam bentuk jam, menit, beserta sisa detik.

Masukan jumlah waktu dalam detik: 3700

Hasil Output: 1 Jam, 1 Menit, 40 Detik

---
### Explain
Program ini merupakan konverter yang mengubah total detik menjadi format waktu dalam jam:menit:detik. Berikut adalah penjelasan singkat mengenai cara program ini bekerja:

1. **Deklarasi Variabel:**
   ```c
   int total_detik;
   int jam, menit, detik, sisa;
   ```
   - `total_detik` adalah variabel yang menyimpan jumlah total detik yang akan dikonversi.
   - `jam`, `menit`, dan `detik` adalah variabel untuk menyimpan hasil konversi ke dalam format waktu.
   - `sisa` digunakan untuk menyimpan sisa detik setelah pembagian.

2. **Input Total Detik:**
   ```c
   printf("Masukkan total detik: ");
   scanf("%d", &total_detik);
   ```
   - Program akan menampilkan pesan untuk meminta pengguna memasukkan nilai total detik.
   - Nilai yang dimasukkan oleh pengguna akan disimpan di variabel `total_detik` menggunakan fungsi `scanf`.

3. **Konversi ke Format Waktu:**
   ```c
   jam = total_detik / 3600;
   sisa = total_detik % 3600;
   menit = sisa / 60;
   detik = sisa % 60;
   ```
   - Pembagian dan modulus digunakan untuk menghitung jumlah jam, menit, dan detik dari total detik yang dimasukkan.
   - `total_detik / 3600` menghitung jumlah jam.
   - `total_detik % 3600` menghitung sisa detik setelah menghitung jam.
   - `sisa / 60` menghitung jumlah menit dari sisa detik.
   - `sisa % 60` menghitung detik setelah menghitung menit.

4. **Output Hasil Konversi:**
   ```c
   printf("Waktu Anda adalah = %02d : %02d : %02d\n", jam, menit, detik);
   ```
   - Program akan menampilkan hasil konversi waktu dalam format jam:menit:detik ke layar.
   - `%02d` digunakan untuk memastikan bahwa angka yang ditampilkan selalu dua digit, misalnya, 01, 02, 10, dsb.

5. **Return 0:**
   ```c
   return 0;
   ```
   - Program mengembalikan nilai 0, menandakan bahwa program telah dijalankan tanpa kesalahan.

Dengan cara ini, program mengonversi total detik yang dimasukkan oleh pengguna ke dalam format waktu yang lebih mudah dibaca.
