#include <stdlib.h>

void mx_strdel(char **str);

void mx_del_strarr(char ***arr) {
    for (int i = 0; (*arr)[i]; ++i)
        mx_strdel(&(*arr)[i]);
    free(*arr);
    *arr = NULL;
}

// #include <stdio.h>

// int main(void) {
//     int count = 5;
//     char **arr = malloc(sizeof(char*) * (count + 1));
//     for (int i = 0; i < count; ++i)
//         arr[i] = malloc(sizeof(char) * 10);
//     arr[count] = NULL;
//     mx_del_strarr(&arr);
//     printf("%p\n", (void*)arr);
// }
