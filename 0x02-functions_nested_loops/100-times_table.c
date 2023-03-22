#include <stdio.h>

void print_times_table(int n) {
    int i, j;
    if (n < 0 || n > 15) {
        return;
    }
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            printf("%d\t", i*j);
        }
        printf("\n");
    }
}

