#include <stdio.h>
#include "algs.h"

int main(){
    
    int list[7] = {13,11,15,25,9,18,21};    

    bSort(list, 7);
    printf("%d\n",binSearch(list, 7, 25));
    
    return 0;
}