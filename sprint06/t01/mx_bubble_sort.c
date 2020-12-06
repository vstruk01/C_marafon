int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size) {
    int count_swap = 0;
    char *tmp = (void*)0;
    
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size -  i - 1; ++j) {
            if (mx_strcmp(arr[j], arr[j + 1]) > 0) {
                tmp = arr[j]; 
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                ++count_swap;
            }
        }
    }
    return count_swap;
}

// #include <stdio.h>

// int main(void) {
//     char *arr[] = {"abc", "xyz", "ghi", "def", NULL};
//     char *arr2[] = {"abc", "acb", "a", NULL};
    
//     printf("%d\n", mx_bubble_sort(arr, 4));
//     printf("%d\n", mx_bubble_sort(arr2, 3));
//     for (int i = 0; arr[i]; ++i)
//         printf("%s\t", arr[i]);
//     printf("\n");
//     for (int i = 0; arr2[i] ; ++i)
//         printf("%s\t", arr2[i]);
//     printf("\n");
// }
