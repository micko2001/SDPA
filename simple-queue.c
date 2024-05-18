#include "queue01.h"

int queue[QUEUE_SIZE];
int awal= -1;
int akhir= -1;

int is_empty(void){	
	if(awal==-1&&akhir==-1){
		return 1;
	}else{
		return 0;
	}
}

int is_full(void){
	if(akhir==QUEUE_SIZE-1){
		return 1;
	}else {
		return 0;
	}
}

void enqueue_item(int item){
	if(!is_full()){
		if(is_empty()){
			awal=0;
			akhir+=1;
			queue[akhir]=item;
		}
		else{
			akhir+=1;
			queue[akhir]=item;
		}
	}else{
		printf("Maaf, Queue anda sudah penuh!\n");
	}
}

void dequeue_item(void){
	if(!is_empty()){
		printf("Item anda pada posisi indeks %d, dengan nilai %d telah dihapus\n", awal,queue[awal]);
		awal+=1;
		if(awal>akhir){
			awal=-1;
			akhir=-1;
		}
	}else{
		printf("Maaf, Queue anda masih kosong!\n");
	}
}

void print_item(void){
	if(!is_empty){
		printf("==============\nData queue anda:\n");
		for(int i = awal; i <= akhir; i++){
			printf("%d ==> %d\n", i, queue[i]);
		}
		printf("==============\n");
	}else{
		printf("Maaf, Queue anda masih kosong!\n");
	}
}


