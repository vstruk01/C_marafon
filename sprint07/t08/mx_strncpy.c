char *mx_strncpy(char *dst, char *str, int len) {
    int i = 0;

    for (;i < len && str[i]; dst[i] = str[i], ++i);
    for (;i < len; dst[i] = '\0', ++i)
    dst[len] = '\0';
    return dst;
}

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
//     // strncpy(NULL, NULL, 10);
//     // mx_strncpy(NULL, NULL, 10);
    
//     char *s = "the worst game on whole world";
//     char *d = malloc(100);
//     printf("%s\n", mx_strncpy(d, s, 5));
//     printf("%s\n", mx_strncpy(d, s, 6));
//     printf("%s\n", mx_strncpy(d, s, 7));
//     printf("%s\n", mx_strncpy(d, s, 18));
//     printf("%s\n", mx_strncpy(d, s, 29));
//     printf("%s\n\n", mx_strncpy(d, s, 23));
    
//     char *d1 = malloc(100);
//     printf("%s\n", strncpy(d1, s, 5));
//     printf("%s\n", strncpy(d1, s, 6));
//     printf("%s\n", strncpy(d1, s, 7));
//     printf("%s\n", strncpy(d1, s, 18));
//     printf("%s\n", strncpy(d1, s, 29));
//     printf("%s\n", strncpy(d1, s, 23));
// }

