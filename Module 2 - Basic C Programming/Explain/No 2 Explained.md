# Practice 2

<p>Buatlah sebuah program yang meminta inputan nama, NIM, program
studi, fakultas, Nilai Praktikum, UTS, UAS. Hitung Nilai Akhir!
Nilai Akhir = 30% Nilai Praktikum + 30% UTS + 40% UAS</p><br>

Keluaran output yang diharapkan:<br>
Nama :<br>
NIM :<br>
Prodi :<br>
Fakultas :<br>
Nilai Praktikum :<br>
Nilai UTS :<br>
Nilai UAS :<br>
Nilai Akhir :<br>

---
Program ini mengambil informasi mahasiswa, termasuk nama, NIM, program studi, fakultas, dan nilai. Kemudian program ini menghitung nilai akhir mahasiswa berdasarkan pembobotan tertentu untuk setiap kategori (0.3 untuk praktikum, 0.3 untuk UTS, dan 0.4 untuk UAS). Terakhir, aplikasi ini mencetak nilai akhir siswa.<br>

Saya akan bahas langkah demi langkah:


- Deklarasi Variabel: Program ini mendeklarasikan beberapa variabel dengan tipe data yang berbeda: nama, prodi, fakultas, dan akhir adalah array karakter (variabel string), nim adalah variabel integer, dan praktikum, uts, uas, dan akhir adalah variabel float (digunakan untuk bilangan desimal).
  ```c
    char nama[50], prodi[50], fakultas[50];
    int nim;
    float praktikum, uts, uas, akhir;
  ```
  <br>

- Antarmuka: Program ini menggunakan fungsi printf untuk meminta masukan dari pengguna. Program ini menampilkan pesan-pesan yang menanyakan nama mahasiswa, NIM, program studi, fakultas, dan nilai.

  Fungsi fgets digunakan untuk membaca masukan dari pengguna untuk string. Fungsi ini mencegah buffer overflow, sebuah masalah keamanan yang umum terjadi pada pemrograman C.

  Fungsi scanf digunakan untuk membaca input pengguna untuk bilangan bulat dan bilangan floating-point.
  ```c
	  printf("Nama: ");
	  fgets(nama, sizeof(nama), stdin);

	  printf("NIM: ");
	  scanf("%i", &nim);
	
	  printf("Prodi: ");
	  fgets(prodi, sizeof(prodi), stdin);
	
	  printf("Fakultas: ");
	  fgets(fakultas, sizeof(fakultas), stdin);
	
	  printf("Nilai praktikum: ");
	  scanf("%f", &praktikum);
	
	  printf("Nilai UTS: ");
	  scanf("%f", &uts);
	
	  printf("Nilai UAS: ");
	  scanf("%f", &uas);
  ```
  <br>
  
- Perhitungan: Program ini menghitung nilai akhir mahasiswa dengan menggunakan rumus berikut: akhir = 0.3 * praktikum + 0.3 * uts + 0.4 * uas.
  ```c
    akhir = 0.3 * praktikum + 0.3 * uts + 0.4 * uas;
  ```
  <br>
  
- Output: Terakhir, program mencetak nilai akhir siswa menggunakan fungsi printf.
  ```c
    printf("Nilai akhir anda adalah: %f", akhir);
  ```
  <br>
  
Fungsi main berfungsi sebagai titik awal program. Ketika program dijalankan, kode di dalam fungsi main akan dijalankan. Dalam hal ini, fungsi main bertanggung jawab untuk mengumpulkan input dari pengguna, menghitung nilai akhir, dan mencetak hasilnya.
