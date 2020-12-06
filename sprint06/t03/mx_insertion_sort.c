int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size) {
    int count_swap = 0;
    char *tmp = (void*)0;
    
    for (int i = size; i > 0; --i) {
        for (int j = size - 1; j > size - i; --j) {
            if (mx_strlen(arr[j - 1]) > mx_strlen(arr[j])) {
                tmp = arr[j]; 
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
                ++count_swap;
            }
        }
    }
    return count_swap;
}

// #include <stdio.h>

// int main(void) {
//     char *arr[] = {"12aaaaaaaaaa", "11aaaaaaaaa", "13aaaaaaaaaaa", "5aaaa", "6aaaaa", NULL};
//     char *arr2[] = {"aa", "a", "a", "a", "a", NULL};
    
//     printf("swap = %d\n", mx_insertion_sort(arr, 5));
//     for (int i = 0; arr[i]; ++i)
//         printf("%s\t", arr[i]);
//     printf("\n");
//     printf("swap = %d\n", mx_insertion_sort(arr2, 5));
//     for (int i = 0; arr2[i] ; ++i)
//         printf("%s\t", arr2[i]);
//     printf("\n");
// }
