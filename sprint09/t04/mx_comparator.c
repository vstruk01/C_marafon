#include <stdbool.h>

int mx_comparator(int *arr, int size, int x, bool(*compare)(int, int)) {
    for (int i = 0; arr && i < size; ++i) {
        if (compare(arr[i], x))
            return i;
    }
    return -1;
}

// bool equal(int x, int y) {
//     return x == y;
// }

// bool equal_pow(int x, int y) {
//     return x == y * y;
// }

// #include <stdio.h>

// int main(void) {
//     int arr[] = {1, 2, 3, 4, 5};
    
//     printf("%d\n", mx_comparator(arr, 5, 3, &equal));
//     printf("%d\n", mx_comparator(arr, 5, -1, &equal));
//     printf("%d\n", mx_comparator(arr, 5, 5, &equal));
//     printf("%d\n", mx_comparator(arr, 5, 1, &equal));
    
    
//     printf("%d\n", mx_comparator(arr, 5, 1, &equal_pow));
//     printf("%d\n", mx_comparator(arr, 5, 2, &equal_pow));
//     printf("%d\n", mx_comparator(arr, 5, 5, &equal_pow));
//     printf("%d\n", mx_comparator(arr, 5, 1, &equal_pow));
// }

