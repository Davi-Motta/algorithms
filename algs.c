//Algorithm definitions

#include "algs.h"

void bSort(int arr[], int len){
    int hld;
    bool swap = true;
    while(swap != false){
        swap = false;
        for(int i = 0; i < len -1; i+=1){
           if(arr[i] > arr[i+1]){ int list[5] = {5,1,4,2,8};  
            hld = arr[i+1];
            arr[i+1]= arr[i];
            arr[i] = hld;
            swap = true;
            }
        }
    }
};