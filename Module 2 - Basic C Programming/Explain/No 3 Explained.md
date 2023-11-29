# Practice 3
<p>Buatlah program untuk menghitung luas dari segitiga berikut, jika diketahui panjang alas = 8 cm, dan tinggi = 5 cm.</p>

---
### Explain
Kode C ini menghitung luas segitiga siku-siku dengan menggunakan rumus: Luas = 0.5 * panjang_alas * tinggi.<br>

Saya akan uraikan kode tersebut langkah demi langkah:<br>

- Program dimulai dengan fungsi main, yang merupakan titik awal dari program C manapun.

- Di dalam fungsi main, tiga variabel integer dideklarasikan dan diinisialisasi:
  ```c
    int panjang_alas = 8;
    int tinggi = 5;
  ```
  <br>

- Program ini kemudian mencetak beberapa pesan pengantar dan menampilkan nilai-nilai yang diketahui untuk alas dan tinggi segitiga.
  ```c
    printf("Luas Segitiga \n");
    printf("-----------------------------------------\n");
    printf("Diketahui panjang alas = 8cm \n");
    printf("Diketahui alas = 5 cm\n");
    printf("Rumusnya adalah 1/2 * panjang alas * luas\n");
    printf("-----------------------------------------\n");
  ```
  <br>

- Program ini kemudian menggunakan variabel float luas untuk menyimpan luas segitiga yang telah dihitung. Luas dihitung dengan mengalikan 0.5, alas segitiga (panjang_alas), dan tinggi segitiga (tinggi). Nilai alas dan tinggi dibuat menjadi float untuk memungkinkan ketepatan desimal dalam perhitungan.
  ```c
    float luas = 0.5 * (float) panjang_alas * (float) tinggi;
  ```
  <br>

- Terakhir, program ini mencetak area segitiga yang dihitung, menampilkannya dengan presisi desimal.
  ```c
    printf("Luas segitiga jika diketahui panjang alas = %i cm dan tinggi = %i cm adalah %f", panjang_alas, tinggi, luas);
  ```
  <br>

Ketika program dijalankan, kode ini akan menampilkan area segitiga dengan alas dan tinggi yang diberikan.
