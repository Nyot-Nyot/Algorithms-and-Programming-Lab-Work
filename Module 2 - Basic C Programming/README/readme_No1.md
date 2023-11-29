# Practice 1
Buatlah sebuah program dengan algoritma berikut:
- Program menampilkan tulisan “Hello, siapa nama lengkapmu?”
- Pengguna menginputkan nama lengkap (nama)
- Menampilkan pesan “Selamat Datang (nama) dalam Pemrograman C!”

---
### Explain

```c
#include <stdio.h>
```
<p>Baris ini mencakup pustaka Standard Input/Output. Ini diperlukan untuk menggunakan fungsi printf dan scanf dalam program.</p><br>

```c
int main(){
    char nama[50];
```
<p>Fungsi main adalah titik awal program. Di dalam fungsi tersebut, sebuah array bernama "nama" dideklarasikan untuk menyimpan nama user. Ukuran array diatur ke 50, yang berarti dapat menyimpan hingga 50 karakter.</p><br>

```c
    printf("Halo, siapa nama lengkapmu? \n");
    printf("Nama: ");
    scanf("%[^\n]s", &nama);
```
<p>Baris-baris ini menampilkan pesan salam dan meminta user untuk memasukkan nama mereka. Fungsi scanf membaca masukan user dan menyimpannya dalam array "nama". Format specifier %[^\n] digunakan untuk membaca semua karakter sampai karakter baris baru ditemukan.</p><br>

```c
    printf("Selamat datang %s dalam Pemograman C!", &nama);
```
<p>Baris ini mencetak pesan selamat datang yang diikuti dengan nama user. Operator "&nama" digunakan untuk mendapatkan alamat memori dari array nama.</p><br>


```c
    return 0;
}
```
<p>Pernyataan "return 0;" menandai akhir dari fungsi main dan mengembalikan nilai 0 ke sistem operasi. Hal ini menandakan bahwa program telah berhasil dijalankan.</p><br>
