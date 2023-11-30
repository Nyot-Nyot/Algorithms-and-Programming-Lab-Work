# Practice 1
Buatlah program kasir barang yang meminta inputan nama pembeli, nama barang, harga barang satuan, jumlah barang yang dibeli, dan harga total (harga barang * jumlah barang)

---
### Explain
Program ini adalah program yang meminta input dari pembeli, termasuk nama pembeli, nama barang, harga barang, dan jumlah barang. Program kemudian menghitung harga total berdasarkan input tersebut dan menampilkan hasilnya. Berikut adalah penjelasan singkat mengenai cara program ini bekerja:

1. **Deklarasi Variabel:**
   ```c
   char nama_pembeli[50], nama_barang[50];
   float harga_barang, jumlah_barang, harga_total;
   ```
   - `nama_pembeli` dan `nama_barang` adalah array karakter yang menyimpan nama pembeli dan nama barang.
   - `harga_barang` dan `jumlah_barang` adalah variabel float untuk menyimpan harga dan jumlah barang.
   - `harga_total` digunakan untuk menyimpan hasil perhitungan harga total.

2. **Input Data Pembeli:**
   ```c
   printf("Nama Pembeli: ");
   scanf(" %[^\n]s", nama_pembeli);
   printf("Nama Barang: ");
   scanf(" %[^\n]s", nama_barang);
   printf("Harga Barang: ");
   scanf("%f", &harga_barang);
   printf("Jumlah barang: ");
   scanf("%f", &jumlah_barang);
   ```
   - Program menampilkan pesan dan meminta pengguna memasukkan data pembeli, seperti nama pembeli, nama barang, harga barang, dan jumlah barang.
   - `%[^\n]s` digunakan untuk membaca input string (nama_pembeli dan nama_barang) hingga karakter newline.

3. **Perhitungan Harga Total:**
   ```c
   harga_total = harga_barang * jumlah_barang;
   ```
   - Program menghitung harga total dengan mengalikan harga barang dengan jumlah barang.

4. **Output Hasil:**
   ```c
   printf("--------------------------------\n");
   printf("Harga Total: Rp %.2f\n", harga_total);
   ```
   - Program menampilkan hasil perhitungan harga total ke layar dengan format mata uang Rupiah.

5. **Return 0:**
   ```c
   return 0;
   ```
   - Program mengembalikan nilai 0, menandakan bahwa program telah dijalankan tanpa kesalahan.

Program ini dapat digunakan untuk menghitung harga total belanja berdasarkan input dari pembeli dan menampilkan informasi tersebut ke layar.
