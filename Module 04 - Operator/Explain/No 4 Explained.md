# Practice 4
Buatlah sebuah program rental film yang menyewakan kesempatan menonton film dengan tarif 1 jam pertama sebesar Rp 15.000 Untuk tarif jam berikutnya adalah 50% dari tarif tetap 1 jam pertama. Hitung berapa total yang harus dibayar jika seseorang menonton film dengan durasi 3 jam?

---
### Explain
Program ini adalah program untuk menghitung total harga rental film berdasarkan jumlah jam yang diinginkan oleh pengguna. Program memberikan diskon setengah harga untuk jam-jam berikutnya jika durasi peminjaman lebih dari 1 jam. Berikut adalah penjelasan singkat mengenai cara program ini bekerja:

1. **Deklarasi Variabel:**
   ```c
   int jam, total, harga = 15000;
   char film[50];
   ```
   - `jam` menyimpan jumlah jam yang diinginkan untuk rental.
   - `total` akan menyimpan total harga yang harus dibayar.
   - `harga` adalah harga per jam untuk rental film (dalam contoh ini, Rp 15.000).
   - `film` adalah array karakter untuk menyimpan nama film yang akan dirental.

2. **Input Nama Film dan Jumlah Jam:**
   ```c
   printf("Film apa yang ingin anda rental? : ");
   scanf("%[^\n]s", film);
   printf("Berapa jam anda ingin rental film? : ");
   scanf("%i", &jam);
   ```
   - Program menampilkan pesan dan meminta pengguna memasukkan nama film dan jumlah jam yang diinginkan.
   - `%[^\n]s` digunakan untuk membaca input string (nama film) hingga karakter newline.

3. **Perhitungan Total Harga:**
   ```c
   if (jam > 1) {
       total = (jam - 1) * (harga / 2) + harga;
   } else {
       total = harga;
   }
   ```
   - Program menggunakan struktur kondisional `if` untuk memeriksa apakah jumlah jam lebih dari 1.
   - Jika ya, program menghitung total harga dengan memberikan diskon setengah harga untuk jam-jam berikutnya.
   - Jika tidak, total harga adalah harga per jam tanpa diskon.

4. **Output Total Harga:**
   ```c
   printf("total harga : %i", total);
   ```
   - Program menampilkan total harga ke layar.

5. **Return 0:**
   ```c
   return 0;
   ```
   - Program mengembalikan nilai 0, menandakan bahwa program telah dijalankan tanpa kesalahan.

Dengan cara ini, program memberikan informasi tentang total harga rental film berdasarkan durasi yang diinginkan oleh pengguna, dengan memberikan diskon untuk jam-jam berikutnya jika durasi melebihi 1 jam.
