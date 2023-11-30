# Practice 2
Buatlah sebuah program dengan nama TOSERBA dalam melayani pembeli mempunyai ketentuan dalam memberikan diskon. Besar diskon mengikuti ketentuan berikut:<br>
a) Jika total pembelian kurang atau sama dengan Rp. 75.000, maka diberikan diskon sebesar 5% dari total pembelian<br>
b) Jika total pembelian melebihi Rp. 75.000, maka akan diberikan diskon sebesar 15% dari total pembelian.<br>
c) Jika total pembelian lebih dari Rp. 125.000, maka diberikan diskon sebesar 25% dari total pembelian ditambah dengan cashback sebesar Rp. 5.000.<br>

---
### Explain
Program ini adalah program untuk menghitung total harga belanja di suatu toko serba ada (TOSERBA) dan memberikan diskon serta cashback berdasarkan aturan tertentu. Berikut adalah penjelasan singkat mengenai cara program ini bekerja:

1. **Deklarasi Variabel:**
   ```c
   int i, jenis_barang, total_harga = 0;
   char nama_barang[100];
   int harga_barang[100];
   ```
   - `jenis_barang` menyimpan jumlah jenis barang yang dibeli.
   - `total_harga` digunakan untuk menyimpan total harga belanja.
   - `nama_barang` adalah array karakter untuk menyimpan nama barang.
   - `harga_barang` adalah array untuk menyimpan harga setiap barang.

2. **Input Jumlah Jenis Barang dan Detail Barang:**
   ```c
   printf("Jumlah jenis barang: ");
   scanf("%i", &jenis_barang);
   // ...
   for(i = 0; i < jenis_barang; i++) {
       // ... (meminta dan menyimpan nama dan harga barang)
   }
   ```
   - Program meminta pengguna memasukkan jumlah jenis barang yang akan dibeli.
   - Selanjutnya, program menggunakan loop `for` untuk meminta dan menyimpan detail setiap barang, yaitu nama dan harga.

3. **Hitung Total Harga:**
   ```c
   for(i = 0; i < jenis_barang; i++) {
       total_harga = total_harga + harga_barang[i];
   }
   ```
   - Program menggunakan loop `for` untuk menjumlahkan harga setiap barang ke dalam variabel `total_harga`.

4. **Output Total Barang dan Total Harga Awal:**
   ```c
   printf("Total barang: %i\n", jenis_barang);
   printf("Total harga: %i\n", total_harga);
   ```
   - Program menampilkan total jumlah barang dan total harga awal belanja ke layar.

5. **Pemberian Diskon dan Cashback:**
   ```c
   if(total_harga <= 75000) {
       // ... (diskon 5%)
   }
   if(total_harga > 75000 && total_harga < 125000) {
       // ... (diskon 15%)
   }
   if(total_harga > 125000) {
       // ... (diskon 25% dan cashback 5000)
   }
   ```
   - Program menggunakan beberapa kondisi `if` untuk memberikan diskon dan cashback berdasarkan total harga belanja.
   - Jika total harga kurang atau sama dengan Rp 75.000, program memberikan diskon 5%.
   - Jika total harga lebih dari Rp 75.000 dan kurang dari Rp 125.000, program memberikan diskon 15%.
   - Jika total harga lebih dari Rp 125.000, program memberikan diskon 25% dan cashback Rp 5.000.

6. **Output Total Harga Setelah Diskon dan Cashback:**
   ```c
   printf("Total harga anda menjadi : %i\n", total_harga);
   ```
   - Program menampilkan total harga setelah pemberian diskon dan cashback ke layar.

7. **Return 0:**
   ```c
   return 0;
   ```
   - Program mengembalikan nilai 0, menandakan bahwa program telah dijalankan tanpa kesalahan.

Dengan cara ini, program memberikan informasi kepada pengguna mengenai total barang, total harga awal, dan total harga setelah pemberian diskon serta cashback berdasarkan aturan tertentu.
