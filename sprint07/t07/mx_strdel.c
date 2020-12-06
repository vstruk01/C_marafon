#include <stdlib.h>

void mx_strdel(char **str) {
    free(*str);
    *str = NULL;
}

// #include <stdio.h>

// int main() {
//     char *str = malloc(10);
//     printf("%p\n", (void*)str);
//     mx_strdel(&str);
//     printf("%s\n", str);
// }
