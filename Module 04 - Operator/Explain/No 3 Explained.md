# Practice 3
Nilai akhir dari praktikum pemrograman C ditentukan oleh empat nilai berikut:

a) Nilai Presensi bobot 10%<br>
b) Nilai Praktek bobot 20%<br>
c) Nilai UTS bobot 30%<br>
d) Nilai UAS bobot 40%<br>

Buatlah program untuk menghitung nilai akhir, jika diketahui Nilai Presensi= 85, Nilai Praktek=65, Nilai UTS=80 dan Nilai UAS= 75!

---
### Explain
Program ini adalah kalkulator nilai akhir untuk seorang mahasiswa berdasarkan bobot nilai dari presensi, praktek, UTS (Ujian Tengah Semester), dan UAS (Ujian Akhir Semester). Berikut adalah penjelasan singkat mengenai cara program ini bekerja:

1. **Deklarasi Variabel:**
   ```c
   int presensi, praktek, uts, uas;
   float akhir;
   ```
   - `presensi`, `praktek`, `uts`, dan `uas` adalah variabel untuk menyimpan nilai presensi, nilai praktek, nilai UTS, dan nilai UAS, masing-masing.
   - `akhir` adalah variabel float untuk menyimpan nilai akhir setelah perhitungan.

2. **Input Nilai:**
   ```c
   printf("Masukkan nilai presensi: ");
   scanf("%d", &presensi);
   printf("Masukkan nilai praktek: ");
   scanf("%d", &praktek);
   printf("Masukkan nilai UTS: ");
   scanf("%d", &uts);
   printf("Masukkan nilai UAS: ");
   scanf("%d", &uas);
   ```
   - Program menampilkan pesan dan meminta pengguna memasukkan nilai presensi, praktek, UTS, dan UAS.
   - Nilai-nilai tersebut disimpan di variabel masing-masing.

3. **Perhitungan Nilai Akhir:**
   ```c
   akhir = (presensi * 0.1) + (praktek * 0.2) + (uts * 0.3) + (uas * 0.4);
   ```
   - Program menghitung nilai akhir dengan menggunakan bobot yang telah ditentukan untuk setiap komponen nilai.
   - Bobotnya adalah 10% untuk presensi, 20% untuk praktek, 30% untuk UTS, dan 40% untuk UAS.

4. **Output Nilai Akhir:**
   ```c
   printf("-------------------------------------------\n");
   printf("Nilai Akhir Anda adalah: %.2f\n", akhir);
   ```
   - Program menampilkan nilai akhir ke layar dengan format dua desimal.

5. **Return 0:**
   ```c
   return 0;
   ```
   - Program mengembalikan nilai 0, menandakan bahwa program telah dijalankan tanpa kesalahan.

Dengan cara ini, program mengizinkan pengguna untuk memasukkan nilai mereka dalam berbagai komponen dan kemudian menghitung nilai akhir berdasarkan bobot yang diberikan. Hasilnya kemudian ditampilkan ke layar.
