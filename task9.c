#include <stdio.h>

void upper(char *str, const int size, int i) {
        if (str[i] >= 65 && str[i] <= 90) {
                printf("%c", str[i]);
        }
        if (i < size) {
                upper(str, size, i + 1);
        }
}
