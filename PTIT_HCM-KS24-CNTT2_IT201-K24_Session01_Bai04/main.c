#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    return 0;
}

// Cách 1:
int sumLoop(int n) {
    int sum = 0;
    for (int i = 1; i <= n;i++) {
        sum += i;
    }
    return sum;
    // độ phức tạp thời gian là O(n)
}

// Cách 2:
int sumFormula(int n) {
    return n * (n + 1) / 2;
    // Độ phức tạp thời gian O(1)
}