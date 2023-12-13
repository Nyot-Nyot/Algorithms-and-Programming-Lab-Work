# Algorithms and Programming Lab Work
This repository contains all programming algorithm practicum assignments. In this course students learn about the principles, concepts and methods in solving computational problems that will be used in making a simple application. Students learn the basic concepts of computers and computer systems, writing program algorithms, data types, identifiers, operators, program structure, modular programming, functions and procedures as well as searching and sorting data.

🧑‍🏫️ Lecturer: Randi Proska Sandra, M.Sc<br>
🎒️ Class code: INF1.62.1008<br>
👨‍🎓️ Student: Dzaki Sultan Rabbani<br>
🔢️ NIM: 23343035<br>
🏫️ major: Informatics<br>

## Assignment Module
<list>
  <li><a href="#module1">Module 01 - Introduction to Algorithms and Programming</a></li>
  <li><a href="#module2">Module 02 - Basic C Programming</a></li>
  <li><a href="#module3">Module 03 - Variables, Constants, and Data Types</a></li>
  <li><a href="Module 04 - Operator">Module 04 - Operator</a></li>
  <li><a href="Module 05 - Flow Control (Decision Making)">Module 05 - Flow Control (Decision Making)</a></li>
  <li><a href="Module 06 - Flow Control (Looping)">Module 06 - Flow Control (Looping)</a></li>
  <li><a href="Module 07 - Array">Module 07 - Array</a></li>
  <li><a href="Module 08 - Function and Procedure">Module 08 - Function and Procedure</a></li>
  <li><a href="Module 09 - Pointer">Module 09 - Pointer</a></li>
  <li><a href="Module 10 - Enumeration and Structures">Module 10 - Enumeration and Structures</a></li>
  <li><a href="Module 11 - File Handling in C">Module 11 - File Handling in C</a></li>
</list>

---
<h1 id="module1">Pengantar Algoritma Pemograman</h1>

- **Algoritma**: Urutan langkah yang sistematis dan logis untuk memecahkan masalah atau mencapai tujuan. Algoritma memiliki enam karakteristik penting, seperti keterbatasan, kepastian, input, output, efektivitas, dan struktur.

- **Pemrograman**: Sebuah proses penulisan kode untuk membuat program komputer. Pemrograman terdiri dari coding, analisis, desain, implementasi, pengujian, dan debugging. Pemrograman menggunakan bahasa dan paradigma yang berbeda, seperti imperative, functional, object-oriented, dll.

- **Bahasa C**: Bahasa pemrograman untuk tujuan umum dan imperatif yang mendukung pemrograman terstruktur dan rekursif. C diciptakan oleh Dennis Ritchie pada tahun 1969-1973 di Bell Labs untuk mengembangkan sistem operasi Unix. C digunakan secara luas, portabel, fleksibel, dan berpengaruh terhadap banyak bahasa lain.

- **IDE**: Integrated Development Environment, sebuah software yang membantu programmer untuk menulis, menguji, dan menjalankan kode dalam satu aplikasi. IDE memiliki banyak fitur, seperti text editor, compiler, debugger, syntax highlighting, code completion, dll. Beberapa contoh IDE adalah DevC++, Visual Studio Code, CodeBlocks, dll.

---
<h1 id="module2">Pemograman Dasar C</h1>

### Pemahaman Struktur Dasar Bahasa Pemrograman C

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
<h1 id="module3">Variabel, Konstanta, & Tipe Data</h1>

- **Variabel & Konstanta**
  Variabel adalah tempat penyimpanan nilai yang tipe datanya ditentukan oleh jenis nilai yang akan disimpan. Nilai variabel dapat berubah-ubah selama program berjalan. Konstanta adalah nilai tetap yang tidak bisa diubah selama program berjalan. Nilai konstanta harus didefinisikan saat deklarasi variabel dan tidak dapat diubah kemudian.

- **Tipe Data Fundamental**
  Terdapat delapan jenis tipe data dalam bahasa pemrograman C, yaitu: Char, Unsigned Char, Signed Char, Integer, Unsigned Integer, Short, Unsigned Short, Long, Unsigned Long, Float, dan Double. Masing-masing tipe data memiliki karakteristik dan ukuran penyimpanan yang berbeda. Ukuran penyimpanan tipe data dapat bervariasi tergantung pada arsitektur komputer yang digunakan. Tipe data Char digunakan untuk menyimpan karakter tunggal, seperti huruf atau angka. Tipe data Integer digunakan untuk menyimpan bilangan bulat, baik positif maupun negatif. Tipe data Float dan Double digunakan untuk menyimpan bilangan pecahan, dengan tingkat presisi yang berbeda.

- **Type Casting**
  Type casting adalah proses mengubah tipe data satu variabel ke tipe data lain, baik secara implisit maupun eksplisit. Type casting dibutuhkan ketika kita ingin melakukan operasi matematika atau logika antara variabel dengan tipe data yang berbeda. Misalnya, jika kita ingin mengubah integer menjadi float untuk memungkinkan operasi pembagian yang lebih kompleks, kita dapat menggunakan sintaks seperti ini: `float hasil = (float) a / (float) b;`

- **Keywords**
  Kata kunci adalah kata yang sudah dipesan oleh bahasa pemrograman dan tidak dapat digunakan sebagai nama variabel, konstanta, fungsi, atau struktur. Kata kunci memiliki makna khusus yang ditentukan oleh bahasa pemrograman dan digunakan untuk mengontrol alur program. Beberapa contoh kata kunci dalam bahasa pemrograman C adalah: if, else, for, while, switch, case, break, continue, return, void, int, char, dan lain-lain.
