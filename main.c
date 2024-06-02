#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "tabel01.h"
#include "sort01.h"
#include "search01.h"

int main (){
     do {
        int pil,item;
		printf("====== Sort-Search =====\r\n");
		printf(" 1. masukkan data\r\n");
		printf(" 2. hapus data\r\n");
		printf(" 3. lihat data\n");
        printf(" 4. sorting data\n");
        printf(" 5. searching data\n");
		printf(" 6. Keluar\r\n");
		printf(" Masukkan pilihan Anda: ");
		scanf("%i",&pil);
        switch (pil)
        {
        case 1:
            printf("Pilihan memasukan data:\n");
            printf(" 1. a-b-c-d-e\n");
            printf(" 2. b-c-a-e-d\n");
            printf(" 3. Kucing-Jerapah-Singa-Harimau\n");
            printf("\nInput anda :");
            int choice;
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                add_item("a");
                add_item("b");
                add_item("c");
                add_item("d");
                add_item("e");
                break;
             case 2:
                add_item("b");
                add_item("c");
                add_item("a");
                add_item("e");
                add_item("d");
                break;
             case 3:
                add_item("Kucing");
                add_item("Jerapah");
                add_item("Singa");
                add_item("Harimau");
                break;
            default:
                printf("salah input!\n");
                break;
            }
            break;
        case 2:
            del_item();
            break;
        case 3:
            print_item();
            break;
        case 4:
            printf("Pilihan sorting data:\n");
            printf("1. selection sort\n");
            printf("2. insertion sort\n");
            printf("3. bubble sort\n");
            printf("input anda :");
            int choice1;
            scanf("%d", &choice1);
            if (choice1 == 1) {
                selection_sort();
                printf("Telah disorting :\n");
                print_item();
            } else if (choice1 == 2 || choice1 == 3) {
                printf("belum tersedia\n");
            } else {
                printf("salah input!\n");
            }

            break;
        case 5:
            printf("Pilihan searching data:\n");
            printf("1. liniear search\n");
            printf("2. binary search\n");
            printf("input anda :");
            int choice2;
            scanf("%d", &choice2);
            if (choice2 == 1) {
                char target[100];
                printf("Masukan nama data yang ingin dicari:");
                scanf("%s", target);
                int result = lin_search(target);
                if (result != -1) {
                    printf("data '%s' ditemukan pada index ke-%d\n", target, result);
                } else {
                    printf("data '%s' tidak ditemukan!\n", target);
                }
            } else if (choice2 == 2) {
                printf("belum tersedia\n");
            } else {
                printf("salah input!\n");
            }
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Kode yang anda masukan salah!\n");
            break;
        }
    }while(1);

    return 0;
}