int mx_popular_int(const int *arr, int size) {
    int pop_int = 0;
    int count_pop_int = 0;
    int tmp_count_pop_int = 0;
    
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            if (arr[i] == arr[j] && ++tmp_count_pop_int){}
        if (tmp_count_pop_int > count_pop_int) {
            pop_int = arr[i];
            count_pop_int = tmp_count_pop_int;
        }
        tmp_count_pop_int = 0;
    }
    
    return pop_int;
}

// #include <stdio.h>

// int main(void) {
//     int arr1[] = {1, 2, 3, 4, 5, 6, 7};
//     int arr2[] = {7, 1, 2, 3, 4, 5, 6};
//     int arr3[] = {1, 2, 1, 4, 5, 6, 7};
//     int arr4[] = {1, 2, 3, 4, 1, 6, 7};
//     int arr5[] = {0, 1, 0, 1, 0, 1, 7};
    
//     printf("%d\n", mx_popular_int(arr1, 7));
//     printf("%d\n", mx_popular_int(arr2, 7));
//     printf("%d\n", mx_popular_int(arr3, 7));
//     printf("%d\n", mx_popular_int(arr4, 7));
//     printf("%d\n", mx_popular_int(arr5, 7));
// }
