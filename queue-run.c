#include <stdlib.h>
#include "queue01.h"


int main(){
    do {
        int pil,item;
		printf("====== Queue =====\r\n");
        printf("Ukuran maksimal: %d\r\n", QUEUE_SIZE);
		printf(" 1. masukkan data\r\n");
		printf(" 2. hapus data\r\n");
		printf(" 3. lihat data\r\n");
		printf(" 4. Keluar\r\n");
		printf(" Masukkan pilihan Anda: ");
		scanf("%i",&pil);
        switch (pil)
        {
        case 1:
            printf("Masukkan data:");
			scanf("%i",&item);
			enqueue_item(item);
            break;
        case 2:
            dequeue_item();
            break;
        case 3:
            print_item();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Kode yang anda masukan salah!");
            break;
        }
    }while(1);

    return 0;
}