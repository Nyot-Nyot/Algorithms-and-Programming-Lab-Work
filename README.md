# Algorithms and Programming Lab Work

## Description
This repository contains all programming algorithm practicum assignments. In this course students learn about the principles, concepts and methods in solving computational problems that will be used in making a simple application. Students learn the basic concepts of computers and computer systems, writing program algorithms, data types, identifiers, operators, program structure, modular programming, functions and procedures as well as searching and sorting data.

## Course Information
🧑‍🏫️ **Lecturer**: Randi Proska Sandra, M.Sc<br>
🎒️ **Class code**: INF1.62.1008<br>
👨‍🎓️ **Student**: Dzaki Sultan Rabbani<br>
🔢️ **NIM**: 23343035<br>
🏫️ **major**: Informatics<br>

## Assignment Module
<list>
  <li><a href="#module1">Module 01 - Introduction to Algorithms and Programming</a></li>
  <li><a href="#module2">Module 02 - Basic C Programming</a></li>
  <li><a href="#module3">Module 03 - Variables, Constants, and Data Types</a></li>
  <li><a href="#module4">Module 04 - Operator</a></li>
  <li><a href="Module 05 - Flow Control (Decision Making)">Module 05 - Flow Control (Decision Making)</a></li>
  <li><a href="Module 06 - Flow Control (Looping)">Module 06 - Flow Control (Looping)</a></li>
  <li><a href="Module 07 - Array">Module 07 - Array</a></li>
  <li><a href="Module 08 - Function and Procedure">Module 08 - Function and Procedure</a></li>
  <li><a href="Module 09 - Pointer">Module 09 - Pointer</a></li>
  <li><a href="Module 10 - Enumeration and Structures">Module 10 - Enumeration and Structures</a></li>
  <li><a href="Module 11 - File Handling in C">Module 11 - File Handling in C</a></li>
</list>

---
<h2 id="module1">Pengantar Algoritma Pemograman</h2>

- **Algoritma**: Urutan langkah yang sistematis dan logis untuk memecahkan masalah atau mencapai tujuan. Algoritma memiliki enam karakteristik penting, seperti keterbatasan, kepastian, input, output, efektivitas, dan struktur.

- **Pemrograman**: Sebuah proses penulisan kode untuk membuat program komputer. Pemrograman terdiri dari coding, analisis, desain, implementasi, pengujian, dan debugging. Pemrograman menggunakan bahasa dan paradigma yang berbeda, seperti imperative, functional, object-oriented, dll.

- **Bahasa C**: Bahasa pemrograman untuk tujuan umum dan imperatif yang mendukung pemrograman terstruktur dan rekursif. C diciptakan oleh Dennis Ritchie pada tahun 1969-1973 di Bell Labs untuk mengembangkan sistem operasi Unix. C digunakan secara luas, portabel, fleksibel, dan berpengaruh terhadap banyak bahasa lain.

- **IDE**: Integrated Development Environment, sebuah software yang membantu programmer untuk menulis, menguji, dan menjalankan kode dalam satu aplikasi. IDE memiliki banyak fitur, seperti text editor, compiler, debugger, syntax highlighting, code completion, dll. Beberapa contoh IDE adalah DevC++, Visual Studio Code, CodeBlocks, dll.

---
<h2 id="module2">Pemograman Dasar C</h2>

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

---
<h2 id="module3">Variabel, Konstanta, & Tipe Data</h2>

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

---
<h2 id="module4">Operator</h2>

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

