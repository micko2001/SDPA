/* Praktikum : QUEUE		(antrian)	
	       dengan menggunakan array  */

/* Praktikan mendefinisikan suatu variable global
   yang bisa dimodifikasi dari dalam suatu fungsi */

/**************************************************/
/* 		PROTOTYPE			  */
#include <stdio.h>	
#define QUEUE_SIZE    5

/* Memeriksa apakah suatu Queue kosong?  */
extern int is_empty(void);

/* Memeriksa apakah suatu Queue penuh?  */
extern int is_full(void);

/* Menambahkan suatu item ke dalam queue */
extern void enqueue_item(int item);
/* 
-  Cek apakah array sudah penuh, apabila sudah penuh 
   maka intruksi tidak bisa dijalankan.
-  Untuk inisiasi pertama, indeks awal diubah menjadi 0.
-  Penambahan satu nilai(increment), pada indeks akhir.
-  Tambahkan item baru ke posisi indeks akhir sekarang.
*/


/* Mengambil suatu item dari dalam queue */
extern void dequeue_item(void);
/*
-  Cek apakah array kosong, apabila kosong maka instruksi
   tidak dapat dijalankan.
-  Kembalikan nilai item yang ada pada indeks awal.
-  Penambahan satu nilai(increment) pada indeks awal.
-  Untuk pengambilan item terakhir, reset nilai indeks 
   awal dan akhir menjadi -1.
*/


/* Mencetak isi queue (dari yang pertama masuk), jika ada 	*/
extern void print_item(void);
