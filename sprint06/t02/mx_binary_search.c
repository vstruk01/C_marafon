int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, char *s, int *count) {
    int result = 0;
    int s_idx = 0;
    int l_idx = size - 1;
    int mid = (s_idx + l_idx) / 2;
    
    *count = 1;
    for (; l_idx != s_idx ; ++(*count)) {
        result = mx_strcmp(arr[mid], s);
        if (!result)
            return mid;
        result > 0 ? (l_idx = mid - 1) : (s_idx = mid + 1);
        mid = (l_idx + s_idx) / 2;
    }
    if (!mx_strcmp(arr[mid], s))
        return mid;
    *count = 0;
    return -1;
}

// #include <stdio.h>

// int main(void) {
//     char *arr[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A"};
//     int count = 0;
    
//     printf("index = %d\n", mx_binary_search(arr, 11, "1", &count));
//     printf("count = %d\n\n", count);
    
//     char *arr2[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    
//     printf("index = %d\n", mx_binary_search(arr2, 6, "ab", &count));
//     printf("count = %d\n\n", count);
//     printf("index = %d\n", mx_binary_search(arr2, 6, "aBc", &count));
//     printf("count = %d\n\n", count);
//     printf("index = %d\n", mx_binary_search(arr2, 6, "aBz", &count));
//     printf("count = %d\n\n", count);
// }

