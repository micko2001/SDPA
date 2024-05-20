/* Praktikum : QUEUE		(antrian)	
	       dengan menggunakan array  */

/* Praktikan mendefinisikan suatu variable global
   yang bisa dimodifikasi dari dalam suatu fungsi */

/**************************************************/
/* 		PROTOTYPE			  */
/*      Circular Queue        */
#ifndef QUEUE_CIR_H
#define QUEUE_CIR_H

#include <stdio.h>	
#include <stdbool.h>	

#define QUEUE_SIZE 5

/* Memeriksa apakah suatu Queue kosong?  */
bool is_empty(void);
/*
- Mengembalikan true jika queue kosong.
- Jika front == -1, queue dianggap kosong.
*/

/* Memeriksa apakah suatu Queue penuh?  */
bool is_full(void);
/*
- Mengembalikan true jika queue penuh.
- Queue penuh jika posisi akhir yang 
  ditambah 1 secara modulus QUEUE_SIZE 
  sama dengan awal.==>(akhir+1)%QUEUE_SIZE
*/

/* Menambahkan suatu item ke dalam queue */
void enqueue_item(int item);
/* 
- Cek apakah queue penuh, jika ya, cetak pesan error 
    dan keluar dari fungsi.
- Jika queue kosong (awal == -1), inisiasi awal ke 0.
- Update akhir ke posisi berikutnya dengan (akhir + 1) % QUEUE_SIZE.
- Tambahkan item baru pada posisi akhir.
*/

/* Mengambil suatu item dari dalam queue */
void dequeue_item(void);
/*
- Cek apakah queue kosong, jika ya, cetak pesan error dan keluar dari fungsi.
- Cetak item pada posisi awal.
- Update awal ke posisi berikutnya dengan (awal + 1) % QUEUE_SIZE.
- Jika setelah pengambilan item queue menjadi kosong (awal == akhir), reset awal dan akhir ke -1.
*/

/* Mencetak isi queue (dari yang pertama masuk), jika ada */
void print_item(void);
/*
- Cek apakah queue kosong, jika ya, cetak pesan bahwa queue kosong.
- Mulai dari awal, cetak item di setiap posisi hingga mencapai akhir.
*/

#endif /* QUEUE_CIR_H */
