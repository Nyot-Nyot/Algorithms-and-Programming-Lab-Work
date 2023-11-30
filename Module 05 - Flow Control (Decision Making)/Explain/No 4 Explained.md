# Practice 4
Buatlah program untuk menentukan nilai akhir mahasiswa.

Dengan ketentuan:<br>
Nilai Kehadiran = 20 %, Nilai Tugas = 20%, Nilai UTS = 25% dan Nilai UAS = 35%.<br>
Nilai Akhir merupakan jumlah dari seluruh setiap nilai.

Rentang Nilai Akhir:<br>
0 s.d. 44 = E<br>
45 s.d. 55 = D<br>
56 s.d. 65 = C<br>
66 s.d. 75 = B-<br>
76 s.d. 80 = B<br>
81 s.d. 85 = B+<br>
86 s.d. 90 = A-<br>
91 s.d. 100 = A

Keterangan Hasil Kelulusan:<br>
a) Antara 0 s.d. 55 menampilkan kalimat, “Maaf, anda tidak lulus!”<br>
b) Antara 56 s.d. 65 menampilkan kalimat, “Anda lulus, tingkatkan lagi untuk kedepannya!”<br>
c) Antara 66 s.d. 85 menampilkan kalimat, “Anda lulus dengan baik, tingkatkan terus belajarnya!”<br>
d) Antara 86 s.d. 100 menampilkan kalimat, “Selamat! Anda lulus dengan nilai yang sangat memuaskan!<br>

---
### Explain
Program ini adalah program untuk menentukan hasil kelulusan mahasiswa berdasarkan nilai-nilai yang diperoleh, dengan menggunakan skala nilai tertentu. Berikut adalah penjelasan singkat mengenai cara program ini bekerja:

1. **Deklarasi Variabel:**
   ```c
   char nama[25], prodi[25];
   int kehadiran, tugas, uts, uas ;
   float akhir;
   ```
   - `nama` dan `prodi` adalah array karakter untuk menyimpan nama dan program studi mahasiswa.
   - `kehadiran`, `tugas`, `uts`, dan `uas` adalah variabel untuk menyimpan nilai kehadiran, tugas, UTS, dan UAS masing-masing.
   - `akhir` adalah variabel untuk menyimpan nilai akhir mahasiswa.

2. **Input Data Mahasiswa:**
   ```c
   printf("Nama: ");
   scanf("%[^\n]s", &nama);
   printf("Prodi: ");
   scanf("%s", &prodi);
   printf("Nilai kehadiran: ");
   scanf("%i", &kehadiran);
   printf("Nilai tugas: ");
   scanf("%i", &tugas);
   printf("Nilai UTS: ");
   scanf("%i", &uts);
   printf("Nilai UAS: ");
   scanf("%i", &uas);
   ```
   - Program meminta pengguna memasukkan data mahasiswa, seperti nama, program studi, dan nilai-nilai akademik.

3. **Perhitungan Nilai Akhir:**
   ```c
   akhir = (kehadiran * 0.2) + (tugas * 0.2) + (uts * 0.25) + (uas * 0.35);
   printf("Nilai akhir = %f\n", akhir);
   ```
   - Program menghitung nilai akhir berdasarkan bobot yang telah ditentukan untuk setiap komponen nilai.
   - Hasil perhitungan ditampilkan ke layar.

4. **Penentuan Hasil Kelulusan:**
   ```c
   if(akhir >= 0 && akhir < 45) {
       // ... (hasil dan pesan untuk nilai E)
   }
   else if (akhir >= 45 && akhir < 56){
       // ... (hasil dan pesan untuk nilai D)
   }
   // ... (kondisi untuk nilai C, B-, B, B+, A-, dan A)
   else{
       // ... (hasil dan pesan untuk nilai A)
   }
   ```
   - Program menggunakan serangkaian kondisi `if-else` untuk menentukan hasil kelulusan berdasarkan rentang nilai akhir.
   - Setiap kondisi memberikan hasil dan pesan sesuai dengan skala nilai yang ditentukan.

5. **Output Hasil Kelulusan:**
   ```c
   printf("Anda mendapat nilai: [nilai]\n");
   printf("[Pesan kelulusan]\n");
   ```
   - Program menampilkan hasil kelulusan dan pesan yang sesuai ke layar.

6. **Return 0:**
   ```c
   return 0;
   ```
   - Program mengembalikan nilai 0, menandakan bahwa program telah dijalankan tanpa kesalahan.

Dengan cara ini, program memberikan informasi kepada pengguna mengenai nilai akhir dan hasil kelulusan berdasarkan skala nilai tertentu.
