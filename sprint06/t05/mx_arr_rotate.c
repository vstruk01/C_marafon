void mx_arr_rotate(int *arr, int size, int shift) {
    shift %= size;
    shift = shift > 0 ? shift : size - (shift * -1);
    for (int i = 0, tmp1 = 0, tmp2 = 0; i < shift; ++i) {
        tmp1 = arr[0];
        for (int j = 0; j < size; ++j) {
            tmp2 = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = tmp2;        
        }
        arr[size - 1] = tmp1;
    }
}

// #include <stdio.h>

// int main(void) {
//     for (int i = 0; i <= 30; ++i) {
//         printf("\ni = %d\n", i);
//         printf("\ni = %lu\n", (long)&i);
//         int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
//         printf("\na = %lu\n", (long)arr);
        
//         mx_arr_rotate(arr, 30, i);
//         for (int j = 0; j < 30; ++j) {
//             printf("%d\t", arr[j]);
//         }
//         printf("\ni = %lu\n", (long)&i);
//         printf("\ni = %d\n", i);
//     }
// }


