![Banner](https://github.com/Nyot-Nyot/Algorithms-and-Programming-Lab-Work/blob/3fd52a9ad57038ca023129522970fd0ebaba0cec/Files/The%20c%20languange.png)
# Algorithms and Programming Lab Work

## Description
This repository contains all programming algorithm practicum assignments. In this course students learn about the principles, concepts and methods in solving computational problems that will be used in making a simple application. Students learn the basic concepts of computers and computer systems, writing program algorithms, data types, identifiers, operators, program structure, modular programming, functions and procedures as well as searching and sorting data.

## Course Information
🧑‍🏫️ **Lecturer**: Randi Proska Sandra, M.Sc<br>
🎒️ **Class code**: INF1.62.1008<br>
👨‍🎓️ **Student**: Dzaki Sultan Rabbani<br>
🔢️ **NIM**: 23343035<br>
🏫️ **major**: Informatics<br>

<h2 id="navigator">Assignment Module</h2>
<list>
  <li><a href="#module1">Module 01 - Introduction to Algorithms and Programming</a></li>
  <li><a href="#module2">Module 02 - Basic C Programming</a></li>
  <li><a href="#module3">Module 03 - Variables, Constants, and Data Types</a></li>
  <li><a href="#module4">Module 04 - Operator</a></li>
  <li><a href="#module5">Module 05 - Flow Control (Decision Making)</a></li>
  <li><a href="#module6">Module 06 - Flow Control (Looping)</a></li>
  <li><a href="#module7">Module 07 - Array</a></li>
  <li><a href="#module8">Module 08 - Function and Procedure</a></li>
  <li><a href="#module9">Module 09 - Pointer</a></li>
  <li><a href="#module10">Module 10 - Enumeration and Structures</a></li>
  <li><a href="#module11">Module 11 - File Handling in C</a></li>
</list>

---
<h1 id="module1">Pengantar Algoritma Pemograman</h1>

- **Algoritma**: Urutan langkah yang sistematis dan logis untuk memecahkan masalah atau mencapai tujuan. Algoritma memiliki enam karakteristik penting, seperti keterbatasan, kepastian, input, output, efektivitas, dan struktur.

- **Pemrograman**: Sebuah proses penulisan kode untuk membuat program komputer. Pemrograman terdiri dari coding, analisis, desain, implementasi, pengujian, dan debugging. Pemrograman menggunakan bahasa dan paradigma yang berbeda, seperti imperative, functional, object-oriented, dll.

- **Bahasa C**: Bahasa pemrograman untuk tujuan umum dan imperatif yang mendukung pemrograman terstruktur dan rekursif. C diciptakan oleh Dennis Ritchie pada tahun 1969-1973 di Bell Labs untuk mengembangkan sistem operasi Unix. C digunakan secara luas, portabel, fleksibel, dan berpengaruh terhadap banyak bahasa lain.

- **IDE**: Integrated Development Environment, sebuah software yang membantu programmer untuk menulis, menguji, dan menjalankan kode dalam satu aplikasi. IDE memiliki banyak fitur, seperti text editor, compiler, debugger, syntax highlighting, code completion, dll. Beberapa contoh IDE adalah DevC++, Visual Studio Code, CodeBlocks, dll.

<div align="center">
  <a href="#navigator"><kbd> <br> Go Back <br> </kbd></a>
</div>

---
<h1 id="module2">Pemograman Dasar C</h1>

**Pemahaman Struktur Dasar Bahasa Pemrograman C**<br>
Ketika kamu mulai belajar bahasa C, ada beberapa hal dasar yang perlu kamu ketahui. Pertama-tama, setiap program C memiliki struktur yang terbagi menjadi dua bagian utama: bagian `#include` dan blok fungsi `main`.

**#Include dan Header Files**<br>
Di awal kode, kamu akan melihat `#include`. Ini bukan sekadar hiasan, tapi perintah penting yang memungkinkan kita menggunakan berbagai fitur tambahan dalam C. Misalnya, `stdio.h` adalah header file yang berisi deklarasi fungsi-fungsi dasar seperti `printf()`, yang kita gunakan untuk mencetak teks ke terminal.

**Fungsi Main**<br>
Fungsi `main()` adalah jantung dari program C. Ini adalah tempat pertama yang dijalankan saat program dimulai. Di sinilah logika program ditulis. Jika kamu melihat `int` sebelum `main`, itu menunjukkan tipe data yang dikembalikan oleh fungsi ini. Biasanya, kita menuliskan `return 0;` di akhir fungsi `main` untuk menandakan bahwa program berjalan dengan sukses.

**Statement dan Semicolons**<br>
Setiap instruksi dalam C diakhiri dengan semicolon (`;`). Ini seperti tanda titik di akhir kalimat yang memberitahu kompiler bahwa kamu telah selesai memberikan instruksi.

**Identifier**<br>
Identifier adalah nama unik yang kamu berikan untuk variabel, fungsi, atau item lainnya. Ada aturan tertentu dalam penamaannya, seperti harus diawali dengan huruf atau underscore, dan tidak boleh mengandung karakter khusus seperti `!`, `$`, `%`, dll.

**Comments dan Whitespaces**<br>
Komentar dalam kode sangat berguna untuk menjelaskan fungsi dari baris kode tertentu. Whitespaces seperti spasi, tab, dan baris baru membantu memisahkan elemen dalam statement agar mudah dibaca oleh kompiler.

**Proses Input & Output**<br>
Dalam C, kita menggunakan fungsi seperti `printf()` dan `scanf()` untuk output dan input. `printf()` digunakan untuk mencetak teks ke layar, sementara `scanf()` digunakan untuk mengambil input dari pengguna.

<div align="center">
  <a href="#navigator"><kbd> <br> Go Back <br> </kbd></a>
</div>

---
<h1 id="module3">Variabel, Konstanta, & Tipe Data</h1>

**Variabel dan Konstanta**<br>
Bayangkan variabel sebagai kotak di mana kita menyimpan barang-barang, dan tipe data sebagai jenis barang yang bisa kita simpan di dalamnya. Di C, kita mendeklarasikan variabel dengan menulis tipe data diikuti oleh nama variabel. Misalnya, `int tinggi;` berarti kita punya kotak bernama 'tinggi' untuk menyimpan angka bulat.

**Tipe Data Fundamental**<br>
Ada beberapa tipe data dasar di C:
- **Char**: Untuk menyimpan satu huruf atau karakter.
- **Integer**: Untuk angka bulat.
- **Float**: Untuk bilangan pecahan.
- **Double**: Sama seperti float, tapi dengan kapasitas penyimpanan yang lebih besar.

**Type Casting**<br>
Type casting itu seperti mengubah air menjadi es agar bisa disimpan dalam kardus. Di C, kita bisa mengubah tipe data dengan menuliskan tipe baru di depan nilai atau variabel, contohnya `(float)10` akan mengubah angka 10 menjadi tipe float.

**Keywords**<br>
Ada kata-kata tertentu dalam C yang punya makna khusus dan tidak bisa digunakan sebagai nama variabel, seperti `if`, `int`, dan `void`.

**Konstanta**<br>
Konstanta itu seperti variabel, tapi nilainya tetap dan tidak bisa diubah. Di C, kita bisa membuat konstanta dengan `#define` atau `const`.

<div align="center">
  <a href="#navigator"><kbd> <br> Go Back <br> </kbd></a>
</div>

---
<h1 id="module4">Operator</h1>

**Operator dalam Pemrograman**<br>
Operator adalah simbol-simbol yang digunakan untuk melakukan operasi tertentu pada operand dalam pemrograman. Operand adalah nilai atau variabel yang menjadi sasaran operasi. Operator dapat membantu programmer untuk mengolah data, membandingkan nilai, membuat kondisi, dan lain-lain.

**Jenis-Jenis Operator**<br>
- **Unary**: Operator yang hanya memerlukan satu operand. Contoh: operator negasi (`!`).
- **Binary**: Operator yang memerlukan dua operand. Contoh: operator penjumlahan (`+`).
- **Ternary**: Operator yang memerlukan tiga operand. Contoh: operator kondisional (`?:`).

**Operator Aritmatika**<br>
Operator aritmatika adalah operator yang digunakan untuk melakukan perhitungan matematika dasar. Ada lima operator aritmatika, yaitu penjumlahan (`+`), pengurangan (`-`), perkalian (`*`), pembagian (`/`), dan modulus (`%`). Modulus adalah operator yang menghasilkan sisa pembagian dua bilangan. Fakta menarik: jika dua bilangan integer dibagi dengan operator pembagian, hasilnya juga akan berupa integer, bukan bilangan pecahan. Misalnya, `7 / 2` menghasilkan `3`, bukan `3.5`. Untuk mendapatkan hasil pecahan, salah satu operand harus berupa bilangan riil (float).

**Operator Penugasan**<br>
Operator penugasan adalah operator yang digunakan untuk memberikan nilai kepada variabel. Ada berbagai macam operator penugasan, mulai dari yang sederhana seperti operator sama dengan (`=`) hingga yang lebih kompleks seperti operator shift right (`>>=`). Operator penugasan dapat digunakan untuk mempersingkat penulisan kode. Misalnya, `a += b` sama artinya dengan `a = a + b`.

**Operator Pembanding**<br>
Operator pembanding adalah operator yang digunakan untuk membandingkan dua nilai atau ekspresi. Ada enam operator pembanding, yaitu lebih besar (`>`), lebih kecil (`<`), sama dengan (`==`), tidak sama dengan (`!=`), lebih besar atau sama dengan (`>=`), dan lebih kecil atau sama dengan (`<=`). Operator pembanding menghasilkan nilai boolean, yaitu `true` atau `false`.

**Operator Logika**<br>
Operator logika adalah operator yang digunakan untuk menggabungkan dua atau lebih pernyataan boolean. Ada tiga operator logika, yaitu AND (`&&`), OR (`||`), dan XOR (`^`). Operator logika mengikuti tabel kebenaran logika matematika. Misalnya, `A && B` bernilai `true` jika dan hanya jika `A` dan `B` keduanya bernilai `true`.

**Operator Bitwise**<br>
Operator bitwise adalah operator yang digunakan untuk melakukan operasi bit per bit pada bilangan biner. Ada tujuh operator bitwise, yaitu AND (`&`), OR (`|`), XOR (`^`), NOT (`~`), shift left (`<<`), shift right (`>>`), dan rotate right (`>>>`). Operator bitwise dapat digunakan untuk mengoptimalkan kinerja dan memori program.

**Operator Lainnya**<br>
Ada juga operator lain yang memiliki fungsi khusus dalam pemrograman, seperti operator alamat (`&`), operator pointer (`*`), operator increment (`++`), operator decrement (`--`), dan operator sizeof (`sizeof`). Operator-operator ini dapat membantu programmer untuk mengakses dan mengubah nilai variabel, pointer, dan tipe data.

<div align="center">
  <a href="#navigator"><kbd> <br> Go Back <br> </kbd></a>
</div>

---
<h1 id="module5">Flow Control: Decision Making</h1>

**Mengenal Flow Control dalam Pemrograman C**<br>
Ketika kita belajar pemrograman, salah satu konsep penting yang harus dipahami adalah *flow control* atau kontrol aliran. Ini adalah cara kita memberi instruksi kepada komputer untuk mengambil keputusan dan menjalankan kode berdasarkan kondisi tertentu.

**1. If Statement**<br>
Ini adalah percabangan dasar. Jika kondisi terpenuhi, maka blok kode di dalamnya akan dijalankan. Misalnya, kita ingin memberikan diskon jika pembelian lebih dari Rp 100.000:

```c
if (totalBelanja > 100000) {
    printf("Selamat, Anda dapat bonus diskon!");
}
```

**2. If Else Statement**<br>
Sedikit lebih kompleks, if else memungkinkan kita untuk menentukan aksi alternatif jika kondisi tidak terpenuhi:

```c
if (passwordBenar) {
    printf("Selamat datang bos!");
} else {
    printf("Password salah, coba lagi!");
}
```

**3. Switch Case**<br>
Alternatif lain untuk if else if, switch case memudahkan kita dalam menangani banyak kondisi:

```c
switch (grade) {
    case 'A':
        printf("Luar biasa!");
        break;
    case 'B':
    case 'C':
        printf("Bagus!");
        break;
    default:
        printf("Silakan coba lagi.");
}
```

**4. Ternary Operator**<br>
Ini adalah bentuk singkat dari if else, sangat berguna untuk pengecekan kondisi sederhana dalam satu baris:

```c
int diskon = (totalBelanja > 100000) ? 10 : 0;
```

**5. Nested If**<br>
Kita juga bisa menempatkan if statement di dalam if lainnya, ini disebut nested if.

<div align="center">
  <a href="#navigator"><kbd> <br> Go Back <br> </kbd></a>
</div>

---
<h1 id="module6">Flow Control: Loop</h1>

**Mengapa Loop itu Penting?**<br>
Loop, atau perulangan, adalah konsep dasar dalam pemrograman yang memungkinkan kita menjalankan kode yang sama berulang kali. Bayangkan jika kita harus menulis kode untuk mencetak angka dari 1 hingga 10 secara manual—sangat tidak efisien, bukan? Nah, dengan loop, kita bisa melakukan ini hanya dengan beberapa baris kode!

**Jenis-Jenis Loop**<br>
Ada empat jenis loop utama dalam bahasa C:
- **For Loop**: Ini adalah contoh dari counted loop, di mana kita tahu pasti berapa kali loop akan berjalan. Contohnya:
```c
for(int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```
- **While Loop**: Ini termasuk uncounted loop, yang berarti kita tidak tahu pasti berapa kali loop akan berjalan. Loop ini akan terus berjalan selama kondisi yang ditentukan masih terpenuhi. Contohnya:
```c
int i = 0;
while(i < 10) {
    printf("%d\n", i);
    i++;
}
```
- **Do While Loop**: Mirip dengan while loop, tetapi do while loop akan menjalankan kode di dalamnya setidaknya satu kali sebelum mengecek kondisi. Contohnya:
```c
int i = 0;
do {
    printf("%d\n", i);
    i++;
} while(i < 10);
```
- **Nested Loop**: Ini adalah loop di dalam loop. Sangat berguna untuk kasus seperti mencetak pola atau bekerja dengan array multidimensi. Contohnya:
```c
for(int i = 0; i < 5; i++) {
    for(int j = 0; j <= i; j++) {
        printf("*");
    }
    printf("\n");
}
```

<div align="center">
  <a href="#navigator"><kbd> <br> Go Back <br> </kbd></a>
</div>

---
<h1 id="module7">Array</h1>

Array adalah salah satu struktur data yang sering digunakan dalam pemrograman. Array memungkinkan kita untuk menyimpan banyak data dalam satu tempat, dan mengaksesnya dengan mudah menggunakan indeks. Array juga bisa memiliki lebih dari satu dimensi, seperti matriks.

Dalam bahasa pemrograman C, array dibuat dengan cara menentukan tipe data, nama variabel, dan ukuran array dalam kurung siku. Misalnya, untuk membuat array yang berisi 10 bilangan bulat, kita bisa menulis:

```c
int angka[10];
```

Untuk mengisi array dengan data, kita bisa menentukan nilainya secara langsung saat deklarasi, atau menggunakan perulangan. Misalnya, untuk mengisi array angka dengan bilangan 1 sampai 10, kita bisa menulis:

```c
int angka[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // cara langsung
```
atau
```c
int angka[10]; // cara perulangan
for (int i = 0; i < 10; i++) {⁵[5]
  angka[i] = i + 1;
}
```

Untuk mengakses data dalam array, kita bisa menggunakan indeksnya. Indeks array selalu dimulai dari nol, sehingga elemen pertama array memiliki indeks 0, elemen kedua memiliki indeks 1, dan seterusnya. Misalnya, untuk mencetak elemen kelima array angka, kita bisa menulis:

```c
printf("%d\n", angka[4]); // indeks 4 berarti elemen kelima
```

Untuk mengubah data dalam array, kita bisa menggunakan operator penugasan (=). Misalnya, untuk mengubah elemen kelima array angka menjadi 50, kita bisa menulis:

```c
angka[4] = 50;
```

Untuk menghitung panjang array, kita bisa menggunakan fungsi sizeof(), yang mengembalikan ukuran memori dari array. Karena ukuran memori tergantung pada tipe data dan ukuran pointer, kita perlu membaginya dengan ukuran pointer untuk mendapatkan panjang array. Misalnya, untuk mencetak panjang array angka, kita bisa menulis:

```c
int length = sizeof(angka) / sizeof(*angka); // panjang array
printf("%d\n", length);
```

Untuk membuat array dua dimensi, kita perlu menentukan ukuran kedua dimensinya dalam kurung siku. Array dua dimensi biasanya digunakan untuk merepresentasikan matriks. Misalnya, untuk membuat array dua dimensi yang berisi 3 baris dan 4 kolom, kita bisa menulis:

```c
int matriks[3][4];
```

Untuk mengisi array dua dimensi dengan data, kita bisa menggunakan cara yang sama dengan array satu dimensi, yaitu secara langsung atau menggunakan perulangan. Misalnya, untuk mengisi array matriks dengan angka 1 sampai 12, kita bisa menulis:

```c
int matriks[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}; // cara langsung
```
atau
```c
int matriks[3][4]; // cara perulangan
int angka = 1;
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 4; j++) {
    matriks[i][j] = angka;
    angka++;
  }
}
```

Untuk mengakses data dalam array dua dimensi, kita perlu menggunakan indeks untuk kedua dimensinya. Misalnya, untuk mencetak elemen baris kedua kolom ketiga array matriks, kita bisa menulis:

```c
printf("%d\n", matriks[1][2]); // indeks 1 dan 2 berarti baris kedua kolom ketiga
```

Untuk mengubah data dalam array dua dimensi, kita bisa menggunakan cara yang sama dengan array satu dimensi, yaitu menggunakan operator penugasan. Misalnya, untuk mengubah elemen baris kedua kolom ketiga array matriks menjadi 99, kita bisa menulis:

```c
matriks[1][2] = 99;
```

Untuk menghitung panjang array dua dimensi, kita bisa menggunakan fungsi sizeof() dengan cara yang sama dengan array satu dimensi, yaitu membagi ukuran memori dengan ukuran pointer. Namun, karena array dua dimensi memiliki dua ukuran, kita perlu membagi lagi dengan ukuran dimensi kedua untuk mendapatkan panjang dimensi pertama. Misalnya, untuk mencetak panjang baris dan kolom array matriks, kita bisa menulis:

```c
int length = sizeof(matriks) / sizeof(*matriks); // panjang baris
int width = sizeof(*matriks) / sizeof(**matriks); // panjang kolom
printf("%d x %d\n", length, width);
```

String adalah array yang berisi karakter. String dibuat dengan cara menentukan tipe data char, nama variabel, dan ukuran array dalam kurung siku. Misalnya, untuk membuat string yang berisi "Hello", kita bisa menulis:

```c
char s[6] = "Hello";
```

Perhatikan bahwa ukuran array harus satu lebih besar dari panjang string, karena string selalu diakhiri dengan karakter null (\0) yang menandakan akhir string.

<div align="center">
  <a href="#navigator"><kbd> <br> Go Back <br> </kbd></a>
</div>

---
<h1 id="module8">Fungsi & Prosedur</h1>

**Fungsi dan Prosedur dalam Bahasa C**

Fungsi dan prosedur adalah dua konsep penting dalam pemrograman, khususnya dalam bahasa C. Fungsi dan prosedur memungkinkan kita untuk membuat sub-program yang bisa digunakan kembali di berbagai tempat, tanpa harus menulis ulang kode yang sama. Fungsi dan prosedur juga membantu kita untuk membuat program yang lebih rapi, modular, dan mudah dipahami.

**Apa itu Fungsi?**

Fungsi adalah sub-program yang memiliki nama, parameter, dan nilai kembalian. Parameter adalah variabel yang digunakan untuk menerima input dari pemanggil fungsi. Nilai kembalian adalah hasil yang dikirimkan oleh fungsi ke pemanggil fungsi. Fungsi bisa dipanggil berkali-kali dari tempat yang berbeda dalam program.

Contoh fungsi yang paling sering kita buat dan panggil adalah fungsi main(). Fungsi ini adalah fungsi utama yang akan dieksekusi pertama kali oleh program C. Fungsi main() biasanya tidak memiliki parameter dan nilai kembalian, sehingga kita menggunakan tipe data void untuk menyatakannya.

```c
#include <stdio.h>

void main() {
  // kode program utama
}
```

**Bagaimana Cara Membuat dan Memanggil Fungsi?**

Untuk membuat fungsi, kita harus menentukan tipe data untuk nilai kembalian, nama fungsi, dan parameter (jika ada). Kemudian kita harus menulis kode yang akan dijalankan oleh fungsi di dalam kurung kurawal. Untuk mengembalikan nilai, kita bisa menggunakan kata kunci return diikuti dengan nilai yang ingin dikembalikan.

Contoh:

```c
// fungsi untuk menghitung luas lingkaran
double luas(double r) {
  // r adalah parameter berupa jari-jari lingkaran
  // konstanta PI
  const double PI = 3.14;
  // menghitung luas
  double L = PI * r * r;
  // mengembalikan nilai luas
  return L;
}
```

Untuk memanggil fungsi, kita harus menulis nama fungsi diikuti dengan tanda kurung dan nilai yang ingin kita berikan ke parameter (jika ada). Nilai yang kita berikan ke parameter disebut argumen. Kita bisa menyimpan nilai kembalian dari fungsi ke dalam variabel atau langsung menggunakannya untuk operasi lain.

Contoh:

```c
#include <stdio.h>

// fungsi luas lingkaran
double luas(double r) {
  const double PI = 3.14;
  double L = PI * r * r;
  return L;
}

void main() {
  // memanggil fungsi luas dengan argumen 10
  double L1 = luas(10);
  // mencetak nilai kembalian
  printf("Luas lingkaran dengan jari-jari 10 adalah %.2f\n", L1);
  // memanggil fungsi luas dengan argumen 5
  double L2 = luas(5);
  // mencetak nilai kembalian
  printf("Luas lingkaran dengan jari-jari 5 adalah %.2f\n", L2);
  // memanggil fungsi luas dengan argumen 7 dan menggunakannya untuk operasi pembagian
  printf("Rasio luas lingkaran dengan jari-jari 10 dan 7 adalah %.2f\n", luas(10) / luas(7));
}
```

Hasil:

```
Luas lingkaran dengan jari-jari 10 adalah 314.00
Luas lingkaran dengan jari-jari 5 adalah 78.50
Rasio luas lingkaran dengan jari-jari 10 dan 7 adalah 2.00
```

**Apa itu Fungsi Rekursif?**

Fungsi rekursif adalah fungsi yang memanggil dirinya sendiri di dalam tubuh fungsi. Fungsi rekursif biasanya digunakan untuk menyelesaikan masalah yang memiliki pola berulang atau bisa dibagi menjadi sub-masalah yang lebih kecil. Fungsi rekursif harus memiliki kondisi berhenti (base case) untuk menghindari looping tanpa akhir.

Contoh fungsi rekursif adalah fungsi untuk menghitung faktorial dari sebuah bilangan. Faktorial dari n adalah hasil perkalian dari 1 sampai n. Rumusnya adalah:

`n! = n x (n-1) x (n-2) x ... x 2 x 1`

Contoh:

`5! = 5 x 4 x 3 x 2 x 1 = 120`

Fungsi rekursif untuk menghitung faktorial adalah:

```c
// fungsi untuk menghitung faktorial
int faktorial(int n) {
  // n adalah parameter berupa bilangan bulat positif
  // kondisi berhenti jika n = 0 atau n = 1
  if (n == 0 || n == 1) {
    return 1;
  }
  // rekursi dengan memanggil fungsi faktorial dengan argumen n-1
  else {
    return n * faktorial(n-1);
  }
}
```

**Apa itu Variabel Lokal dan Variabel Global?**

Variabel lokal dan variabel global adalah dua jenis variabel yang berbeda dalam cakupan dan ruang lingkupnya. Variabel lokal adalah variabel yang hanya bisa diakses dari dalam fungsi tempat variabel itu dideklarasikan. Variabel global adalah variabel yang bisa diakses dari semua fungsi dalam program.

Contoh:

```c
#include <stdio.h>

// variabel global
int x = 10;

// fungsi untuk menampilkan nilai x
void tampil() {
  // variabel lokal
  int x = 20;
  // mencetak nilai x lokal
  printf("Nilai x lokal adalah %d\n", x);
}

void main() {
  // memanggil fungsi tampil
  tampil();
  // mencetak nilai x global
  printf("Nilai x global adalah %d\n", x);
}
```

Hasil:

```
Nilai x lokal adalah 20
Nilai x global adalah 10
```

**Apa itu Pass by Value dan Pass by Reference?**

Pass by value dan pass by reference adalah dua cara untuk memberikan nilai ke parameter fungsi. Pass by value berarti kita memberikan nilai langsung ke parameter, sehingga parameter akan memiliki salinan dari nilai tersebut. Perubahan yang terjadi pada parameter tidak akan mempengaruhi nilai aslinya.

Pass by reference berarti kita memberikan alamat memori dari nilai ke parameter, sehingga parameter akan menunjuk ke lokasi yang sama dengan nilai tersebut. Perubahan yang terjadi pada parameter akan mempengaruhi nilai aslinya.

Contoh:

```c
#include <stdio.h>

// fungsi untuk menukar nilai dua variabel dengan pass by value
void tukar_value(int a, int b) {
  // a dan b adalah parameter yang menerima salinan dari nilai variabel
  // membuat variabel sementara untuk menyimpan nilai a
  int temp = a;
  // menukar nilai a dengan b
  a = b;
  // menukar nilai b dengan temp
  b = temp;
  // mencetak nilai a dan b setelah ditukar
  printf("Nilai a dan b di dalam fungsi tukar_value adalah %d dan %d\n", a, b);
}

// fungsi untuk menukar nilai dua variabel dengan pass by reference
void tukar_reference(int *a, int *b) {
  // a dan b adalah parameter yang menerima alamat memori dari variabel
  // membuat variabel sementara untuk menyimpan nilai a
  int temp = *a;
  // menukar nilai a dengan b
  *a = *b;
  // menukar nilai b dengan temp
  *b = temp;
  // mencetak nilai a dan b setelah ditukar
  printf("Nilai a dan b di dalam fungsi tukar_reference adalah %d dan %d\n", *a, *b);
}

void main() {
  // membuat variabel x dan y
  int x = 10;
  int y = 20;
  // mencetak nilai x dan y sebelum ditukar
  printf("Nilai x dan y sebelum ditukar adalah %d dan %d\n", x, y);
  // memanggil fungsi tukar_value dengan argumen x dan y
  tukar_value(x, y);
  // mencetak nilai x dan y setelah ditukar dengan pass by value
  printf("Nilai x dan y setelah ditukar dengan pass by value adalah %d dan %d\n", x, y);
  // memanggil fungsi tukar_reference dengan argumen alamat memori dari x dan y
  tukar_reference(&x, &y);
  // mencetak nilai x dan y setelah ditukar dengan pass by reference
  printf("Nilai x dan y setelah ditukar dengan pass by reference adalah %d dan %d\n", x, y);
}
```

Hasil:

```
Nilai x dan y sebelum ditukar adalah 10 dan 20
Nilai x dan y di dalam fungsi tukar_value adalah 20 dan 10
Nilai x dan y setelah ditukar dengan pass by value adalah 10 dan 20
Nilai x dan b di dalam fungsi tukar_reference adalah 20 dan 10
Nilai x dan y setelah ditukar dengan pass by reference adalah 20 dan 10
```

Dari hasil di atas, kita bisa melihat bahwa pass by value tidak mengubah nilai asli dari variabel, sedangkan pass by reference mengubah nilai asli dari variabel. Hal ini karena pass by value hanya mengoperasikan salinan dari nilai, sedangkan pass by reference mengoperasikan nilai yang sebenarnya.

**Apa itu Prosedur?**

Prosedur adalah sub-program yang memiliki nama dan parameter, tetapi tidak memiliki nilai kembalian. Prosedur biasanya digunakan untuk melakukan tugas-tugas tertentu yang tidak memerlukan hasil, seperti mencetak pesan, mengatur warna, atau menggambar grafik. Prosedur bisa dipanggil berkali-kali dari tempat yang berbeda dalam program.

**Bagaimana Cara Membuat dan Memanggil Prosedur?**

Untuk membuat prosedur, kita harus menentukan nama prosedur dan parameter (jika ada). Kemudian kita harus menulis kode yang akan dijalankan oleh prosedur di dalam kurung kurawal. Kita tidak perlu menggunakan kata kunci return untuk mengakhiri prosedur.

Contoh prosedur untuk mencetak pesan selamat datang adalah:

```c
// prosedur untuk mencetak pesan selamat datang
void sapa() {
  // mencetak pesan
  printf("Selamat datang di Github!\n");
}
```

Untuk memanggil prosedur, kita harus menulis nama prosedur diikuti dengan tanda kurung dan nilai yang ingin kita berikan ke parameter (jika ada). Nilai yang kita berikan ke parameter disebut argumen. Kita tidak bisa menyimpan atau menggunakkan hasil dari prosedur, karena prosedur tidak mengembalikan nilai.

Contoh:

```c
#include <stdio.h>

// prosedur untuk mencetak pesan selamat datang
void sapa() {
  // mencetak pesan
  printf("Selamat datang di Github!\n");
}

void main() {
  // memanggil prosedur sapa tanpa argumen
  sapa();
  // memanggil prosedur sapa lagi
  sapa();
}
```

Hasil:

```
Selamat datang di Github!
Selamat datang di Github!
```

<div align="center">
  <a href="#navigator"><kbd> <br> Go Back <br> </kbd></a>
</div>

---
<h1 id="module9">Pointer</h1>

### Apa itu Pointer?

Pointer adalah sebuah variabel yang berisi alamat memori dari variabel lain. Alamat memori adalah lokasi di mana data disimpan di dalam RAM (Random Access Memory). Setiap variabel yang kita buat di program pasti punya alamat memori sendiri-sendiri. Kita bisa melihat alamat memori dari sebuah variabel dengan menggunakan simbol & (ampersand) di depan namanya.

Misalnya, kita punya variabel umur dan tinggi dengan nilai masing-masing 20 dan 170. Kita bisa melihat alamat memori dari kedua variabel ini dengan kode berikut:

```c
#include <stdio.h>

int main() {
  int umur = 20;
  int tinggi = 170;

  printf("Alamat memori variabel umur adalah %x\n", &umur);
  printf("Alamat memori variabel tinggi adalah %x\n", &tinggi);

  return 0;
}
```

Hasil outputnya mungkin seperti ini:

```
Alamat memori variabel umur adalah 61ff04
Alamat memori variabel tinggi adalah 61ff00
```

Perhatikan bahwa alamat memori ditampilkan dalam format heksadesimal (bilangan basis 16) dengan menggunakan %x sebagai format specifier. Alamat memori ini bisa berbeda-beda tergantung pada komputer dan sistem operasi yang digunakan.

Nah, pointer adalah variabel yang isinya adalah alamat memori dari variabel lain. Pointer dibuat dengan menambahkan simbol * (asterisk) di depan namanya. Misalnya, kita bisa membuat pointer yang mengacu pada variabel umur dengan kode berikut:

```c
int *pointer_umur; // deklarasi pointer
pointer_umur = &umur; // inisialisasi pointer dengan alamat memori variabel umur
```

Dengan demikian, pointer_umur akan berisi alamat memori dari variabel umur, yaitu 61ff04. Kita bisa menampilkan isi pointer dengan menggunakan %x sebagai format specifier, sama seperti alamat memori.

```c
printf("Isi pointer_umur adalah %x\n", pointer_umur);
```

Hasil outputnya:

```
Isi pointer_umur adalah 61ff04
```

Kita juga bisa menampilkan alamat memori dari pointer itu sendiri dengan menggunakan simbol & di depan namanya. Misalnya:

```c
printf("Alamat memori pointer_umur adalah %x\n", &pointer_umur);
```

Hasil outputnya mungkin seperti ini:

```
Alamat memori pointer_umur adalah 61fefc
```

Perhatikan bahwa alamat memori pointer_umur berbeda dengan alamat memori umur. Ini karena pointer_umur adalah variabel yang berbeda dengan umur, meskipun isinya sama.

### Lalu, Pointer untuk Apa?

Pointer berguna untuk mengakses dan mengubah data yang ada di alamat memori tertentu. Dengan pointer, kita bisa mengakses data tanpa harus menggunakan nama variabel aslinya. Kita bisa menggunakan simbol * di depan nama pointer untuk mengakses data yang ada di alamat memori yang ditunjuk oleh pointer. Simbol * ini disebut dereference operator.

Misalnya, kita bisa menampilkan nilai dari variabel umur dengan menggunakan pointer_umur sebagai berikut:

```c
printf("Nilai umur adalah %d\n", *pointer_umur);
```

Hasil outputnya:

```
Nilai umur adalah 20
```

Kita juga bisa mengubah nilai dari variabel umur dengan menggunakan pointer_umur sebagai berikut:

```c
*pointer_umur = 25; // mengubah nilai umur menjadi 25
printf("Nilai umur sekarang adalah %d\n", umur); // menampilkan nilai umur
```

Hasil outputnya:

```
Nilai umur sekarang adalah 25
```

Dengan demikian, kita bisa mengakses dan mengubah data yang ada di alamat memori tertentu dengan menggunakan pointer. Ini berguna untuk beberapa hal, seperti:

- Menghemat memori. Dengan pointer, kita tidak perlu membuat variabel baru untuk menyimpan data yang sama. Kita cukup membuat pointer yang mengacu pada alamat memori dari variabel yang sudah ada.
- Membuat struktur data dinamis. Dengan pointer, kita bisa membuat struktur data yang bisa berubah ukuran dan bentuknya sesuai dengan kebutuhan, seperti linked list, tree, graph, dan sebagainya.
- Melakukan pass by reference. Dengan pointer, kita bisa mengirimkan alamat memori dari sebuah variabel ke dalam fungsi, sehingga fungsi bisa mengubah nilai variabel tersebut secara langsung. Ini berbeda dengan pass by value, di mana fungsi hanya menerima salinan nilai variabel, sehingga perubahan yang terjadi di dalam fungsi tidak mempengaruhi variabel aslinya.

### Bagaimana Contoh Penggunaan Pointer dalam Pemrograman C?

Berikut adalah beberapa contoh penggunaan pointer dalam pemrograman C:

#### Pointer untuk Pass by Reference

Misalnya, kita ingin membuat sebuah fungsi yang menambahkan nilai dari sebuah variabel dengan 5. Jika kita menggunakan pass by value, maka fungsi tersebut akan menerima salinan nilai variabel, sehingga perubahan yang terjadi di dalam fungsi tidak mempengaruhi variabel aslinya. Contohnya:

```c
#include <stdio.h>

// fungsi untuk menambahkan nilai dengan 5
void add_score(int score) {
  score = score + 5;
  printf("Nilai score di dalam fungsi adalah %d\n", score);
}

int main() {
  int score = 0; // variabel score dengan nilai awal 0
  printf("Nilai score sebelum fungsi dipanggil adalah %d\n", score);
  add_score(score); // memanggil fungsi dengan pass by value
  printf("Nilai score setelah fungsi dipanggil adalah %d\n", score);
  return 0;
}
```

Hasil outputnya:

```
Nilai score sebelum fungsi dipanggil adalah 0
Nilai score di dalam fungsi adalah 5
Nilai score setelah fungsi dipanggil adalah 0
```

Perhatikan bahwa nilai score setelah fungsi dipanggil masih 0, karena fungsi hanya menerima salinan nilai score, bukan alamat memori dari score.

Jika kita ingin fungsi bisa mengubah nilai score secara langsung, maka kita harus menggunakan pointer untuk melakukan pass by reference. Caranya adalah dengan mengubah tipe data parameter fungsi menjadi pointer, dan mengirimkan alamat memori dari variabel yang ingin diubah ke dalam fungsi. Contohnya:

```c
#include <stdio.h>

// fungsi untuk menambahkan nilai dengan 5
void add_score(int *score) {
  *score = *score + 5;
  printf("Nilai score di dalam fungsi adalah %d\n", *score);
}

int main() {
  int score = 0; // variabel score dengan nilai awal 0
  printf("Nilai score sebelum fungsi dipanggil adalah %d\n", score);
  add_score(&score); // memanggil fungsi dengan pass by reference
  printf("Nilai score setelah fungsi dipanggil adalah %d\n", score);
  return 0;
}
```

Hasil outputnya:

```
Nilai score sebelum fungsi dipanggil adalah 0
Nilai score di dalam fungsi adalah 5
Nilai score setelah fungsi dipanggil adalah 5
```

Perhatikan bahwa nilai score setelah fungsi dipanggil berubah menjadi 5, karena fungsi menerima alamat memori dari score, dan mengubah nilai yang ada di alamat memori tersebut.


#### Pointer untuk Mengakses Array Multidimensi

Array multidimensi adalah array yang memiliki lebih dari satu dimensi, seperti array dua dimensi (matriks) atau array tiga dimensi (kubus). Pointer juga bisa digunakan untuk mengakses elemen array multidimensi, dengan cara yang sedikit berbeda dari array satu dimensi.

Misalnya, kita punya array dua dimensi dengan ukuran 3x3 yang berisi angka-angka. Kita bisa membuat pointer yang menunjuk ke elemen pertama array dengan kode berikut:

```c
int numbers[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // array dua dimensi dengan 3 baris dan 3 kolom
int (*ptr_current)[3]; // pointer untuk menunjuk ke elemen array

ptr_current = numbers; // menginisialisasi pointer dengan alamat elemen pertama array
```

Perhatikan bahwa kita harus menambahkan tanda kurung di sekitar nama pointer dan ukuran kolom array, agar compiler mengerti bahwa kita ingin membuat pointer ke array, bukan array dari pointer. Jika kita tidak menambahkan tanda kurung, maka compiler akan menganggap bahwa kita ingin membuat array dari pointer, yang berarti kita harus mengalokasikan memori untuk setiap pointer di dalam array.

Untuk mengakses elemen array, kita bisa menggunakan operator dereference (*) dan operator indeks ([]). Misalnya, kita bisa menampilkan elemen pertama array dengan kode berikut:

```c
printf("Elemen pertama array adalah %d\n", *ptr_current[0]);
```

Hasil outputnya:

```
Elemen pertama array adalah 1
```

Perhatikan bahwa kita harus menambahkan indeks 0 setelah nama pointer, karena pointer menunjuk ke array, bukan elemen array. Jika kita tidak menambahkan indeks 0, maka kita akan mengakses alamat memori dari array, bukan nilai dari elemen array.

Untuk berpindah ke elemen selanjutnya, kita bisa menggunakan operator aritmatika (+) atau operator increment (++) pada pointer. Misalnya, kita bisa berpindah ke baris kedua array dengan kode berikut:

```c
ptr_current++; // menambahkan nilai pointer dengan 1
```

Dengan demikian, pointer akan menunjuk ke alamat memori dari baris kedua array. Kita bisa menampilkan elemen pertama dari baris kedua array dengan kode berikut:

```c
printf("Elemen pertama dari baris kedua array adalah %d\n", *ptr_current[0]);
```

Hasil outputnya:

```
Elemen pertama dari baris kedua array adalah 4
```

Untuk berpindah ke kolom selanjutnya, kita bisa menambahkan indeks pada operator dereference. Misalnya, kita bisa berpindah ke kolom kedua dari baris kedua array dengan kode berikut:

```c
printf("Elemen kedua dari baris kedua array adalah %d\n", *ptr_current[1]);
```

Hasil outputnya:

```
Elemen kedua dari baris kedua array adalah 5
```

Dengan cara ini, kita bisa mengakses semua elemen array multidimensi dengan menggunakan pointer. Kita juga bisa menggunakan pointer untuk mengubah nilai dari elemen array, dengan cara yang sama seperti array satu dimensi.

<div align="center">
  <a href="#navigator"><kbd> <br> Go Back <br> </kbd></a>
</div>

---
<h1 id="module10">Enumerasi & Struct</h1>

**Enum** adalah singkatan dari enumeration, yang berarti penyebutan atau penomoran. Enum adalah tipe data yang berisi kumpulan konstanta yang sudah ditentukan sebelumnya. Konstanta adalah nilai tetap yang tidak bisa diubah. Enum berguna untuk membuat kode lebih mudah dibaca dan dimengerti, karena kita bisa menggunakan nama yang bermakna daripada angka atau karakter.

Misalnya, kita ingin membuat program yang bisa menampilkan nama hari dalam seminggu. Kita bisa menggunakan enum untuk mendefinisikan konstanta untuk setiap hari, seperti ini:

```c
enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};
```

Dengan enum, kita bisa membuat variabel dengan tipe data hari, dan mengisinya dengan salah satu konstanta yang ada di enum. Contohnya:

```c
enum hari sekarang;
sekarang = SELASA;
printf("Hari ini adalah %d\n", sekarang);
```

Output:

```
Hari ini adalah 1
```

Perhatikan bahwa enum secara otomatis memberikan nilai numerik untuk setiap konstanta, dimulai dari 0. Jadi, SENIN = 0, SELASA = 1, dan seterusnya. Kita juga bisa menentukan nilai sendiri untuk konstanta, dengan cara menulis tanda sama dengan (=) dan nilai yang diinginkan. Contohnya:

```c
enum hari {SENIN = 1, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};
```

Dengan cara ini, SENIN = 1, SELASA = 2, dan seterusnya. Nilai yang tidak ditentukan akan mengikuti nilai sebelumnya ditambah satu.

Enum juga bisa digunakan untuk membuat tipe data boolean, yaitu tipe data yang hanya memiliki dua nilai, yaitu benar (true) atau salah (false). Bahasa C tidak memiliki tipe data boolean bawaan, jadi kita bisa membuatnya sendiri dengan enum, seperti ini:

```c
enum boolean {FALSE, TRUE};
```

Dengan enum boolean, kita bisa membuat variabel dengan tipe data boolean, dan mengisinya dengan FALSE atau TRUE. Contohnya:

```c
enum boolean status;
status = TRUE;
if (status == TRUE) {
  printf("Status benar\n");
} else {
  printf("Status salah\n");
}
```

Output:

```
Status benar
```

**Struct** adalah singkatan dari structure, yang berarti struktur atau susunan. Struct adalah tipe data yang berisi kumpulan variabel dengan berbagai tipe data yang dibungkus dalam satu variabel. Struct berguna untuk membuat kode lebih rapi dan terstruktur, karena kita bisa menyimpan data yang berkaitan dalam satu tempat.

Misalnya, kita ingin membuat program yang bisa menyimpan data mahasiswa. Kita bisa menggunakan struct untuk mendefinisikan tipe data mahasiswa, yang berisi variabel-variabel seperti npm, nama, tgl_lahir, alamat, dan hp. Contohnya:

```c
struct mahasiswa {
  int npm;
  char *nama;
  char *tgl_lahir;
  char *alamat;
  char *hp;
};
```

Dengan struct, kita bisa membuat variabel dengan tipe data mahasiswa, dan mengisinya dengan data yang sesuai. Contohnya:

```c
struct mahasiswa mhs1;
mhs1.npm = 10400570;
mhs1.nama = "Muh. Rizki Putra";
mhs1.tgl_lahir = "09-19-1980";
mhs1.alamat = "Padang";
mhs1.hp = "7874528";
printf("NPM: %d\n", mhs1.npm);
printf("Nama: %s\n", mhs1.nama);
printf("Tanggal Lahir: %s\n", mhs1.tgl_lahir);
printf("Alamat: %s\n", mhs1.alamat);
printf("HP: %s\n", mhs1.hp);
```

Output:

```
NPM: 10400570
Nama: Muh¹²[12]. Rizki Putra
Tanggal Lahir: 09-19-1980
Alamat: Padang
HP: 7874528
```

Perhatikan bahwa struct menggunakan tanda titik (.) untuk mengakses variabel yang ada di dalamnya. Kita juga bisa menggunakan tanda panah (->) jika kita menggunakan pointer untuk struct. Pointer adalah variabel yang menyimpan alamat memori dari variabel lain. Contohnya:

```c
struct mahasiswa *mhs2;
mhs2 = &mhs1; //mengambil alamat memori dari mhs1
printf("NPM: %d\n", mhs2->npm);
printf("Nama: %s\n", mhs2->nama);
printf("Tanggal Lahir: %s\n", mhs2->tgl_lahir);
printf("Alamat: %s\n", mhs2->alamat);
printf("HP: %s\n", mhs2->hp);
```

Output:

```
NPM: 10400570
Nama: Muh¹²[12]. Rizki Putra
Tanggal Lahir: 09-19-1980
Alamat: Padang
HP: 7874528
```

Struct juga bisa digunakan dengan kata kunci typedef, yang berfungsi untuk membuat alias atau nama lain untuk tipe data. Dengan typedef, kita bisa membuat nama baru untuk struct, sehingga kita tidak perlu menulis kata struct lagi saat membuat variabel. Contohnya:

```c
typedef struct mahasiswa mhs; //membuat alias mhs untuk struct mahasiswa
mhs mhs3; //membuat variabel dengan tipe data mhs
mhs3.npm = 10400572;
mhs3.nama = "Pratama Sutisna";
mhs3.tgl_lahir = "11-08-1978";
mhs3.alamat = "Pariaman";
mhs3.hp = "7987555";
printf("NPM: %d\n", mhs3.npm);
printf("Nama: %s\n", mhs3.nama);
printf("Tanggal Lahir: %s\n", mhs3.tgl_lahir);
printf("Alamat: %s\n", mhs3.alamat);
printf("HP: %s\n", mhs3.hp);
```

Output:

```
NPM: 10400572
Nama: Pratama Sutisna
Tanggal Lahir: 11-08-1978
Alamat: Pariaman
HP: 7987555
```

Struct juga bisa dibuat bersarang, yaitu ada struct di dalam struct. Hal ini berguna untuk membuat data yang lebih kompleks dan terkait. Contohnya:

```c
typedef struct tanggal {
  int tahun;
  int bulan;
  int hari;
} tgl; //membuat alias tgl untuk struct tanggal

typedef struct mahasiswa {
  int npm;
  char *nama;
  tgl tgl_lahir; //membuat variabel dengan tipe data tgl
  char *alamat;
  char *hp;
} mhs; //membuat alias mhs untuk struct mahasiswa

mhs mhs4; //membuat variabel dengan tipe data mhs
mhs4.npm = 10400573;
mhs4.nama = "Rina Sari";
mhs4.tgl_lahir.tahun = 1980; //mengisi data tahun
mhs4.tgl_lahir.bulan = 9; //mengisi data bulan
mhs4.tgl_lahir.hari = 19; //mengisi data hari
mhs4.alamat = "Bukittinggi";
mhs4.hp = "7896543";
printf("NPM: %d\n", mhs4.npm);
printf("Nama: %s\n", mhs4.nama);
printf("Tanggal Lahir: %d-%d-%d\n", mhs4.tgl_lahir.tahun, mhs4.tgl_lahir.bulan, mhs4.tgl_lahir.hari); //menampilkan data tanggal
printf("Alamat: %s\n", mhs4.alamat);
printf("HP: %s\n", mhs4.hp);
```

Output:

```
NPM: 10400573
Nama: Rina Sari
Tanggal Lahir: 1980-9-19
Alamat: Bukittinggi
HP: 7896543
```

<div align="center">
  <a href="#navigator"><kbd> <br> Go Back <br> </kbd></a>
</div>

---
<h1 id="module11">File Handling</h1>

File adalah salah satu cara untuk menyimpan data secara permanen di komputer. File bisa berupa teks atau binary, tergantung pada format dan isi datanya. Dalam bahasa C, kita bisa membaca dan menulis data ke file dengan menggunakan beberapa fungsi bawaan, seperti fopen(), fclose(), fgets(), dan fputs().

Untuk membaca file, kita perlu membuka file tersebut dengan fungsi fopen() dan memberikan mode yang sesuai, misalnya "r" untuk read atau baca saja. Fungsi fopen() akan mengembalikan sebuah pointer yang menunjuk ke file yang dibuka. Jika file tidak ada atau tidak bisa dibuka, maka pointer akan bernilai NULL.

Contoh kode untuk membuka file teks bernama puisi.txt:

```c
#include <stdio.h>

int main() {
  // buat pointer untuk file
  FILE *fptr;

  // buka file dengan mode read
  fptr = fopen("puisi.txt", "r");

  // cek apakah file berhasil dibuka
  if (fptr == NULL) {
    printf("File tidak bisa dibuka.\n");
    return 1;
  }

  // lakukan operasi baca file di sini

  // tutup file
  fclose(fptr);

  return 0;
}
```

Untuk membaca isi file, kita bisa menggunakan fungsi fgets() yang akan membaca satu baris teks dari file dan menyimpannya ke dalam sebuah variabel. Fungsi fgets() membutuhkan tiga parameter, yaitu variabel yang akan menampung teks, panjang maksimal teks yang akan dibaca, dan pointer file yang menunjuk ke file yang dibuka.

Contoh kode untuk membaca dan menampilkan isi file puisi.txt:

```c
#include <stdio.h>

int main() {
  // buat pointer untuk file
  FILE *fptr;

  // buat variabel untuk menampung teks
  char buff[255];

  // buka file dengan mode read
  fptr = fopen("puisi.txt", "r");

  // cek apakah file berhasil dibuka
  if (fptr == NULL) {
    printf("File tidak bisa dibuka.\n");
    return 1;
  }

  // baca dan tampilkan isi file
  while (fgets(buff, sizeof(buff), fptr) != NULL) {
    printf("%s", buff);
  }

  // tutup file
  fclose(fptr);

  return 0;
}
```

Untuk menulis file, kita perlu membuka file tersebut dengan fungsi fopen() dan memberikan mode yang sesuai, misalnya "w" untuk write atau tulis saja. Fungsi fopen() akan mengembalikan sebuah pointer yang menunjuk ke file yang dibuka. Jika file tidak ada, maka file akan dibuat baru. Jika file sudah ada, maka isi file akan ditimpa.

Contoh kode untuk menulis teks ke file puisi.txt:

```c
#include <stdio.h>

int main() {
  // buat pointer untuk file
  FILE *fptr;

  // buka file dengan mode write
  fptr = fopen("puisi.txt", "w");

  // cek apakah file berhasil dibuka
  if (fptr == NULL) {
    printf("File tidak bisa dibuka.\n");
    return 1;
  }

  // tulis teks ke file
  fputs("Aku ingin menjadi pelangi\n", fptr);
  fputs("Yang mewarnai hidupmu\n", fptr);
  fputs("Aku ingin menjadi bintang\n", fptr);
  fputs("Yang menerangi malammu\n", fptr);

  // tutup file
  fclose(fptr);

  return 0;
}
```

Untuk menulis dan membaca file secara bersamaan, kita bisa menggunakan mode yang menggabungkan keduanya, misalnya "w+" untuk write dan read. Dengan mode ini, kita bisa menulis teks ke file dan kemudian membacanya kembali.

Contoh kode untuk menulis dan membaca file puisi.txt:

```c
#include <stdio.h>

int main() {
  // buat pointer untuk file
  FILE *fptr;

  // buat variabel untuk menampung teks
  char buff[255];

  // buka file dengan mode write dan read
  fptr = fopen("puisi.txt", "w+");

  // cek apakah file berhasil dibuka
  if (fptr == NULL) {
    printf("File tidak bisa dibuka.\n");
    return 1;
  }

  // tulis teks ke file
  fputs("Aku ingin menjadi pelangi\n", fptr);
  fputs("Yang mewarnai hidupmu\n", fptr);
  fputs("Aku ingin menjadi bintang\n", fptr);
  fputs("Yang menerangi malammu\n", fptr);

  // kembalikan pointer file ke awal
  rewind(fptr);

  // baca dan tampilkan isi file
  while (fgets(buff, sizeof(buff), fptr) != NULL) {
    printf("%s", buff);
  }

  // tutup file
  fclose(fptr);

  return 0;
}
```
<div align="center">
  <a href="#navigator"><kbd> <br> Go Back <br> </kbd></a>
</div>
