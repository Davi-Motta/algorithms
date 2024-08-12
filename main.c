#include <stdio.h>
#include "algs.h"

int main(){
    
    int list[7] = {13,11,15,25,9,18,21};    
    
    bSort(list, 7);
    for(int c = 0; c < 7; c++){
       printf("index [%d] -> %d\n",c,list[c]);
    }
    return 0;
}