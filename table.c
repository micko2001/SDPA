#include <stdio.h>
#include <string.h>
#include "tabel01.h"

int isi=-1;
char tabel[TABEL_SIZE][SIZE];

int is_empty(void){
	if(isi==-1){
		return 1;
	}
	return 0;
}

int is_full(void){
	if(isi==TABEL_SIZE){
		return 1;
	}
	return 0;
}

void add_item(char *item){
	if(is_full()==1){
		printf("\nArray sudah penuh!\n\n"); 
	}else {
		isi+=1;
		strcpy(tabel[isi],item);
		printf("data '%s' sudah masuk pada index ke-%d\n",tabel[isi], isi );
	}
}

void print_item(void){
	if(is_empty()==1){
		printf("\nArray masih kosong!\n\n");
	}
	else {
		int i ;
		for ( i = 0; i<isi+1 ; i++){
			printf("data ke-%d= %s\n",i, tabel[i]);
		};
	}
}

void del_item(){
	if(is_empty()==1){
		printf("\nArray masih kosong!\n\n");
	}else{
		isi=-1;
	}
}


//int main (void){
//	printf("kosong? %d", is_empty());
//	printf("full? %d", is_full());
//	
//	char temp [100];
//	printf("\n\n ISI data :");
//	scanf("%s", &temp);
//	add_item(temp);
//	print_item();
//	return 0;
//}
