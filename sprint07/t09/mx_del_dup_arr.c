#include <stdlib.h>

static void get_size(int *src, int src_size, int *dst_size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    int *result_arr = NULL;
    
    get_size(src, src_size, dst_size);
    result_arr = malloc(sizeof(int) * *dst_size);
    for (int i = 0; i < src_size; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == i) {
                *result_arr = src[j];
                ++result_arr;
            }
            if (src[j] == src[i])
                break;
        }
    }
    return result_arr - *dst_size;
}

static void get_size(int *src, int src_size, int *dst_size) {
    *dst_size = 0;
    for (int i = 0; i < src_size; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == i)
                ++(*dst_size);
            if (src[j] == src[i])
                break;
        }
    }
}

// #include <stdio.h>

// int main(void) {
//     int arr[] = {1, 1, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 7, 7, 8, 9, 9, 9, 10, 10, 10, 10, 10, 10};
//     int arr2[] = {1, 2, 2, 8, 4, 6, 8, 9, -4, 3, 4};
    
//     int count = 0;
//     int len = 28;
//     for (int i = 0; i < len; ++i)
//         printf("%d\t", arr[i]);
//     printf("\n");
//     int *arr_copy = mx_del_dup_arr(arr, len, &count);
//     for (int i = 0; i < count; ++i)
//         printf("%d\t", arr_copy[i]);
//     printf("\n");
//     printf("%p\n\n\n", (void*)&arr_copy);
    
//     free(arr_copy);
//     arr_copy = NULL;
//     len = 11;
//     for (int i = 0; i < len; ++i)
//         printf("%d\t", arr2[i]);
//     printf("\n");
//     arr_copy = mx_del_dup_arr(arr2, len, &count);
//     for (int i = 0; i < count; ++i)
//         printf("%d\t", arr_copy[i]);
//     printf("\n");
//     printf("%p\n", (void*)&arr_copy);
//     free(arr_copy);
//     arr_copy = NULL;
// }

