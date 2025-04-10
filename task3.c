#include <stdio.h>

void numprint(int n) {
        printf("%d \n", n);
        if (n > 0) {
                numprint(n - 1);
        }
}
