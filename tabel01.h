/* Praktikum : Tabel	
     dengan menggunakan array  */

/* Praktikan mendefinisikan suatu variable global
   yang bisa dimodifikasi dari dalam suatu fungsi */

/**************************************************/
/* 		PROTOTYPE			  */

#define TABEL_SIZE    10
#define SIZE    15
extern int isi;
extern char tabel[TABEL_SIZE][SIZE];

/* Memeriksa apakah suatu Tabel kosong?  */
extern int is_empty(void);

/* Memeriksa apakah suatu Tabel kosong?  */
extern int is_full(void);

/* Menambahkan suatu item (string) ke dalam tabel */
/* Kemungkinan error, karena ukuran array sudah penuh */
extern void add_item(char *item);

/* Mencetak isi Tabel jika ada        */
extern void print_item(void);

// Menghapus tabel
extern void del_item(void);
