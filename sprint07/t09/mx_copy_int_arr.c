#include <stdlib.h>

int *mx_copy_int_arr(const int *arr, int size) {
    int *arr_copy = NULL;
    
    if (!arr)
        return NULL;

    arr_copy = malloc(sizeof(int) * size);
    for (int i = 0; i < size; ++i) {
        arr_copy[i] = arr[i];
    }
    return arr_copy;
}

// #include <stdio.h>

// int main(void) {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int *copy = mx_copy_int_arr(arr, 8);

//     for (int i = 0; i < 8; ++i) {
//         printf("%d  ", copy[i]);
//     }
//     free(copy);
//     printf("\n");
    
//     printf("%s\n", (char*)mx_copy_int_arr(NULL, 8));
// }
