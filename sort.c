#include <stdio.h>
#include <string.h>
#include "tabel01.h"
#include "sort01.h"


void selection_sort(){
	int i,j;
	for (i=0;i<isi;i++){
		int in=i;
		for(j=i+1;j<isi+1;j++){			
			if(strcmp(tabel[in],tabel[j])>0){
				in=j;				
			}
		}
		if(in!=i){
		char temp[100];
		strcpy(temp, tabel[i]);
		strcpy(tabel[i],tabel[in]);
		strcpy(tabel[in], temp);
		}
	}
}

void insertion_sort(){
	
}

void bubble_sort(){
	
}
