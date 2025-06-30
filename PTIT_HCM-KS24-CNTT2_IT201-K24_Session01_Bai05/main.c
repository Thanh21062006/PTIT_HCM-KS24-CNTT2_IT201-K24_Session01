#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    return 0;
}

// Hàm hoán đổi giá trị 2 phần tử
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp sử dụng thuật toán Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    // Độ phức tạp thời gian: O(n^2)
    // Độ phức tạp không gian: O(1) - không dùng mảng phụ
}