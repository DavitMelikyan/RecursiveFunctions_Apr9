#include <stdio.h>

void revprint(int n, int i) {
        printf("%d \n", i);
        if (i < n) {
                revprint(n, i + 1);
        }
}
