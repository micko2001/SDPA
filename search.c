#include <stdio.h>
#include <string.h>

#include "tabel01.h"
#include "search01.h"

int lin_search(char *str){
    int i;
    for (i=0;i<isi+1;i++){
        if(strcmp(tabel[i],str)==0){
            return i;
        }
    }
    return -1;
}

int bin_search(char *str){

}

