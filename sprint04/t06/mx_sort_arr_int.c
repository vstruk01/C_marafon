// #include <stdio.h>

void mx_sort_arr_int(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // printf("arr[%d] = %d --- arr[%d] = %d\n", j, arr[j], j + 1, arr[j + 1]);
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }       
}

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int len = 11;
//     int *arr = malloc(sizeof(int) * len);
//     for (int i = 0; i < len; i++) {
//         arr[i] = len - i;
//     }
    
//     printf("\x1b[33mbefore sort\x1b[0m\n");
//     for (int i = 0; i < len; i++) {
//         printf("%d\t", arr[i]);
//     }
    
//     mx_sort_arr_int(arr, len);
//     printf("\n\n\x1b[33mafter sort\x1b[0m\n");
//     for (int i = 0; i < len; i++) {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }
