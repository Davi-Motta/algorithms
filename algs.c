//Algorithm definitions
#include <stdbool.h>
#include <sys/types.h>

void bSort(int arr[], int len){
    int hld;
    bool swap = true;
    while(swap != false){
        swap = false;
        for(int i = 0; i < len -1; i++){
           if(arr[i] > arr[i+1]){  
            hld = arr[i+1];
            arr[i+1]= arr[i];
            arr[i] = hld;
            swap = true;
            }
        }
    }
};

int binSearch(int arr[], int len, int trg){
    int L = 0;
    int R = (len-1);
    int m; 
    while(arr[m] != trg){       
        m = (L + R)/2; 
        if(L < R){
            if(arr[m] < trg){
             L += m;
            }
            else if(arr[m] > trg){
                R -= m;
            }
        }
        else{
            return -1;
        }
    }
    return m;
};