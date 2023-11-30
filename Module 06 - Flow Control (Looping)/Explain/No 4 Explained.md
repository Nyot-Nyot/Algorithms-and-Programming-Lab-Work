# Practice 4
Buatlah program ATM dimana Hattori dapat melakukan setoran dan penarikan saldo. Menu yang ada pada ATM:

ATM<br>
1) Cek Saldo<br>
2) Setoran<br>
3) Penarikan Tunai<br>
4) Exit

Setiap terdapat transaksi setoran ataupun penarikan maka nilai total saldo akan berubah (bisa dicek melalui menu cek saldo). Kemudian kebijakan bank menyatakan saldo minimal yang harus disisakan dalam saldo adalah Rp. 50.000. jika saldo kurang dari atau sama dengan Rp. 50.000 maka tidak bisa dilakukan penarikan.

Kasus:<br>
No Rek : 0123<br>
Nama Akun : Hatori<br>
Saldo ATM : Rp. 175.000<br>

Skenario:<br>
a) Hattori menyetorkan uang sebesar Rp. 25.000, kemudian setoran kedua sebesar Rp. 45.000. Berapakah saldo Hattori saat ini?<br>
b) Hattori melakukan penarikan pertama sebesar Rp. 50.000, kemudian penarikan kedua sebesar Rp. 45.000. Berapakah sisa saldo Hattori setelah itu?<br>
c) Hattori melakukan penarikan ketiga sebesar Rp. 120.000. Berapakah sisa saldo Hattori?<br>

Berikan jawaban dengan ilustrasi dan bukti screenshot testing program yanganda buat!

---
### Explain
Program ini merupakan simulasi sederhana dari sebuah mesin ATM dengan beberapa fungsi dasar seperti cek saldo, setoran, dan penarikan tunai. Berikut adalah penjelasan singkat mengenai cara program ini bekerja:

1. **Deklarasi Variabel:**
   ```c
   int input, saldo = 175000;
   char nama[50];
   ```
   - `input` digunakan untuk menyimpan pilihan yang dimasukkan oleh pengguna.
   - `saldo` digunakan untuk menyimpan saldo dalam akun, diinisialisasi dengan nilai 175000.
   - `nama` digunakan untuk menyimpan nama pemilik akun.

2. **Header dan Input Awal:**
   ```c
   printf("=======================ATM=======================\n");
   // ...
   fgets(nama, sizeof(nama), stdin);
   nama[strcspn(nama, "\n")] = 0;
   printf("Pilihan Anda: ");
   scanf("%d", &input);
   ```
   - Program menampilkan header dan petunjuk penggunaan.
   - Meminta pengguna untuk memasukkan nama dan pilihan menu awal.

3. **Loop Menu ATM:**
   ```c
   while(input != 4) {
       pilihan(input, &saldo);
       printf("\n\nPilihan Anda: ");
       scanf("%d", &input);
   }
   ```
   - Program memasuki loop `while` yang terus berjalan selama pengguna tidak memilih opsi keluar (input = 4).
   - Pada setiap iterasi loop, program memanggil fungsi `pilihan` dengan parameter input dan alamat dari variabel saldo.

4. **Fungsi `pilihan`:**
   ```c
   int pilihan(int input, int *saldo){
       // ...
   }
   ```
   - Fungsi ini menerima input dan alamat dari variabel saldo sebagai parameter.
   - Bergantung pada input, fungsi ini akan melakukan operasi tertentu seperti cek saldo, setoran, atau penarikan tunai.

5. **Implementasi Menu ATM:**
   - **Cek Saldo:**
     ```c
     case 1:
         printf("---------Cek Saldo---------\n");
         printf("Saldo: %d", *saldo);
         break;
     ```
   - **Setoran:**
     ```c
     case 2:
         printf("--------Setor Tunai--------\n");
         int setor;
         printf("Jumlah Setoran: ");
         scanf("%d", &setor);
         *saldo = *saldo + setor;
         printf("Saldo: %d", *saldo);
         break;
     ```
   - **Penarikan Tunai:**
     ```c
     case 3:
         printf("------Penarikan Tunai------\n");
         int tarik;
         printf("Jumlah Penarikan: ");
         scanf("%d", &tarik);
         *saldo = *saldo - tarik;
         if(*saldo < 50000) {
             printf("Maaf, saldo minimal di dalam akun minimal Rp. 50000");
             *saldo = *saldo + tarik;
             break;
         }
         printf("Saldo: %d", *saldo);
         break;
     ```
   - **Default (Pilihan Tidak Valid):**
     ```c
     default:
         printf("Mohon maaf, pilihan tersebut tidak ada");
     ```
6. **Keluar dari Program:**
   ```c
   printf("Terima Kasih");
   ```
   - Program mencetak pesan terima kasih setelah keluar dari loop utama.

Dengan cara ini, program menciptakan simulasi mesin ATM sederhana dengan beberapa opsi dasar untuk pengelolaan akun dan saldo.

### Screenshot program
<img src="">
<img src="">
<img src="">
<img src="">
<img src="">
<img src="">
<img src="">
