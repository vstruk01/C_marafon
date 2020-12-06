int mx_strlen(const char *s1);
int mx_strcmp(const char *s1, const char *s2);

int mx_selection_sort(char **arr, int size) {
    char *tmp = (void*)0;
    int count_swap = 0;
    
    for (int i = 0, swap_idx = 0; i < size; ++i, swap_idx = i) {
        for (int j = i + 1; j < size; ++j) {
            if (mx_strlen(arr[swap_idx]) > mx_strlen(arr[j]) 
                || ( mx_strlen(arr[swap_idx]) == mx_strlen(arr[j]) 
                     && mx_strcmp(arr[swap_idx], arr[j]) > 0)) {
                swap_idx = j;
            }
        }
        if (swap_idx != i) {
            tmp = arr[i];
            arr[i] = arr[swap_idx];
            arr[swap_idx] = tmp;
            ++count_swap;
        }
    }
    return count_swap;
}

// #include <stdio.h>

// int main(void) {
//     char *arr[] = {"Abcd", "a", "aBc", "abc", "Z", "z", "AbCd", NULL};
//     char *arr2[] = {"Z", "Abcd", "a", "aBc", "z", "abc", "AbCd", NULL};
    
//     printf("count swap = %d\n", mx_selection_sort(arr, 7));
//     for (int i = 0; arr[i]; i++) {
//         printf("%s\t", arr[i]);
//     }
//     printf("\n");
//     printf("count swap =  %d\n", mx_selection_sort(arr2, 7));
//     for (int i = 0; arr[i]; i++) {
//         printf("%s\t", arr[i]);
//     }
//     printf("\n");
// }
