# Practice 3
Buatlah program rumus lengkap dengan menggunakan logika pengambilan keputusan dengan switch case:<br>
a) Rumus Luas Permukaan Bola;<br>
b) Rumus Luas Permukaan Kubus;<br>
c) Rumus Luas Permukaan Balok:<br>
d) Rumus Luas Permukaan Tabung;<br>

---
### Explain
Program ini adalah kalkulator luas permukaan yang memungkinkan pengguna memilih jenis bangun ruang (bola, kubus, balok, atau tabung) dan menghitung luas permukaannya berdasarkan masukan pengguna. Berikut adalah penjelasan singkat mengenai cara program ini bekerja:

1. **Deklarasi Variabel:**
   ```c
   int pilihan, jari_jari, sisi_kubus;
   int panjang, lebar, tinggi;
   float hasil;
   ```
   - Variabel `pilihan` menyimpan jenis bangun ruang yang akan dihitung luas permukaannya.
   - Variabel-variabel lain digunakan untuk menyimpan nilai-nilai yang dibutuhkan sesuai dengan jenis bangun ruang yang dipilih.
   - `hasil` adalah variabel untuk menyimpan hasil perhitungan luas permukaan.

2. **Input Jenis Bangun Ruang:**
   ```c
   printf("Masukkan pilihan anda: ");
   scanf("%i", &pilihan);
   ```
   - Program meminta pengguna memasukkan jenis bangun ruang yang ingin dihitung luas permukaannya.

3. **Switch Statement untuk Memilih Bangun Ruang:**
   ```c
   switch(pilihan) {
       // ... (kondisi untuk setiap jenis bangun ruang)
   }
   ```
   - Program menggunakan `switch` untuk mengevaluasi nilai `pilihan` dan memilih jenis bangun ruang yang sesuai.

4. **Input Nilai Sesuai Jenis Bangun Ruang:**
   ```c
   case 1:
       // ... (meminta dan menyimpan nilai jari-jari bola)
       break;
   case 2:
       // ... (meminta dan menyimpan nilai sisi kubus)
       break;
   case 3:
       // ... (meminta dan menyimpan nilai panjang, lebar, dan tinggi balok)
       break;
   case 4:
       // ... (meminta dan menyimpan nilai jari-jari dan tinggi tabung)
       break;
   ```
   - Setiap kasus dalam `switch` meminta pengguna memasukkan nilai yang diperlukan berdasarkan jenis bangun ruang yang dipilih.

5. **Perhitungan Luas Permukaan:**
   ```c
   hasil = // ... (rumus perhitungan luas permukaan sesuai jenis bangun ruang);
   printf("Luas permukaan [jenis bangun ruang] = %f", hasil);
   ```
   - Program menggunakan rumus perhitungan luas permukaan sesuai dengan jenis bangun ruang yang dipilih.
   - Hasil perhitungan ditampilkan ke layar.

6. **Return 0:**
   ```c
   return 0;
   ```
   - Program mengembalikan nilai 0, menandakan bahwa program telah dijalankan tanpa kesalahan.

Dengan cara ini, program memberikan fungsionalitas kalkulator luas permukaan untuk berbagai jenis bangun ruang dan memungkinkan pengguna memilih jenis bangun ruang yang akan dihitung.
