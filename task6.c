#include <stdio.h>

void revarr(int *arr,const int size, int i) {
        if(i < size - 1) {
                revarr(arr, size, i + 1);
        }
        printf("%d ", arr[i]);
}
