#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    return 0;
}

void printDouble(int n) {
    int i = 1;
    while (i < n) {
        printf("%d\n", i);
        i *= 2;
    }
}

// Độ phức tạp thời gian là O(log n)