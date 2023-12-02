# Basic C Programming
## A. Syntax
Syntax adalah aturan penulisan dalam membuat kode. setiap bahasa pemograman memiliki aturan syntax nya masing-masing. Bahasa C memiliki struktur, yang terdiri dari file header dan block fungsi main.
```c
#inlcude <stdio.h>    }
#include <string.h>   }} File header
#include <stdlib.h>   }

int main(){
  //...block main
  return 0;
}
```

#### 1). File header
Di baris paling awal, terdapat kode `#include`. Perintah `#include` digunakan untuk memasukkan sebuah file khusus yang memungkinkan untuk mengakses berbagai fitur tambahan dalam bahasa C. `#include` berfungsi untuk mengimpor fungsi-fungsi yang sudah didefinisikan pada header file. Header file adalah file yang berisi definisi fungsi yang sudah dibuat. Tujuannya agar bisa digunakan pada program C yang lainnya. File ini berekstensi `.h`, contoh: `stdio.h`. Pada contoh di atas, kita mengimpor file `stdio.h`. File ini berisi deklarasi fungsi-fungsi dasar yang kita butuhkan untuk membuat program C, seperti `printf()`.<br>

#### 2). Main function
Ketika program pertama kali dijalankan, yang pertama kali ia cari adalah fungsi main. jadi kita harus mengisi logika dan algoritma program di dalam sini. Struktur `main()` sendiri pada dasarnya merupakan sebuah fungsi (function).
```c
int main(){
  //isi statement
  return 0;
}
```
Maksud dari `int` di depan main adalah tipe data yang akan dikembalikan. Maka di dalam fungsi `main()`, wajib kita sertakan `return 0`. Artinya, fungsi main akan mengembalikan nilai 0 setelah selesai dieksekusi.<br>

#### 3). Statement
Statement adalah perintah yang ingin kita lakukan pada komputer. contohnya,
```c
printf("Hello world!");
```
kita menyuruh komputer untuk mencetak teks Hello World! ke console. Setiap statement di dalam program C warjib diakhiri dengan titik koma (;) atau semicolon.<br>

#### 4). Semicolons
Pada program, semikolon menandakan berakhirnya sebuah perintah atau statement. Artinya dalam program C semua statement harus diakhiri dengan semikolon kalau tidak program akan error<br>

#### 5). Identifier
Indentifier merupakan sebuah nama yang digunakan untuk mengidentifikasi variabel, fungsi, atau semua item yang didefinisikan oleh programmer. Adapun cara menuliskan identifier yaitu:<br>
- Diawali dengan huruf A s/d Z, a s/d z atau underscore (_).<br>
- Indentifier dapat dibuat menggunakan digit angka 0 s/d 9 tapi tidak diperbolehkan untuk digunakan pada awal karakter pada identifier.<br>
- Tidak diperbolehkan menggunakan karakter lain selain yang telah disebutkan, artinya karakter seperti !, $, %, @, - dan karakter lainnya tidak diperbolehkan dimanapun di dalam nama identifier.<br>c
- Bahasa C merupakan bahasa case sensitive yang artinya alamat dan Alamat merupakan identifier yang berbeda.
  ```c
  // Misalkan kita membuat variabel seperti ini
  int angka;
  int Angka;
  ```
  Variabel `angka` dengan `Angka` akan diganggap variabel yang berbeda, karena ada yang pakai huruf besar (kapital) dan hutuf kecil.
- Nama identifier harus unik. Untuk menghindari kesalahan dalam penulisan program atau agar lebih mudah membaca kode program (tidak membingungkan) sebaiknya hindari memberi nama identifier yang mirip.
