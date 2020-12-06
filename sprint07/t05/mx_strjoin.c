#include <stdlib.h>

char *mx_strdup(const char *s);
char *mx_strcat(char *s1, const char *s2);
void mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strjoin(char const *s1, char const *s2) {
    char *result = NULL;
    
    if (!s1 && !s2)
        return NULL;
    if (!s1)
        return mx_strdup(s2);
    if (!s2)
        return mx_strdup(s1);
    
    result = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
    mx_strcpy(result, s1);
    result = mx_strcat(result, s2);
    return result;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

// int mx_str_find(const char *s, char c, int i) {
//     for (; s[i]; ++i) {
//         if (s[i] == c)
//             return i;
//     }
//     return -1;
// }

// void mx_get_number(int ***arr, int i, char *s1, int *pos) {
//     i = mx_str_find(s1, '?', i);
//     for (int j = i == 0 ? 1 : 0; j < 10; ++j) {
//         s1[i] = '0' + j;
//         if (mx_str_find(s1, '?', i) != -1) {
//             mx_get_number(arr, i + 1, s1, pos);
//         } else {
//             (*arr)[0][*pos] = mx_atoi(s1);
//             ++(*pos);
//         }
//     }
//     s1[i] = '?';
// }


// int main(void) {
    // char str[] = "1?1?1?";
    // int **arr = malloc(sizeof(int*) * 2);
    // arr[0] = malloc(sizeof(int) * 1000);
    // int i = 0, pos = 0;
        
    // mx_get_number(&arr, i, str, &pos);
    
    
    // printf("\n\n");
    // for (int j = 0; j < 1000; ++j) {
    //     printf("%d ", arr[0][j]);
    // }
    
    
    
    // char *res = mx_strjoin("Hello ", "World!");
    // printf("%s\n", res);
    // free(res);
    // res = mx_strjoin("Hi ", NULL);
    // printf("%s\n", res);
    // free(res);
// }
