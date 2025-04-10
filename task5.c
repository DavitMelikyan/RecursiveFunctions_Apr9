#include <stdio.h>

void printarr(int *arr,const int size, int i) {
        printf("%d ", arr[i]);
        if(i < size - 1) {
                printarr(arr, size, i + 1);
        }
}
