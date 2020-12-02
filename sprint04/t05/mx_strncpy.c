char *mx_strncpy(char *dst, char *str, int len) {
    for (int i = 0; i < len; dst[i] = str[i], i++);
    dst[len] = '\0';
    return dst;
}

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
    // strncpy(NULL, NULL, 10);
    // mx_strncpy(NULL, NULL, 10);
    
//     char *s = "Hello World";
//     char *d = malloc(100);
//     printf("%s\n", mx_strncpy(d, s, 5));
//     printf("%s\n", mx_strncpy(d, s, 6));
//     printf("%s\n", mx_strncpy(d, s, 7));
//     printf("%s\n\n", mx_strncpy(d, s, 17));
    
//     char *d1 = malloc(100);
//     printf("%s\n", strncpy(d1, s, 5));
//     printf("%s\n", strncpy(d1, s, 6));
//     printf("%s\n", strncpy(d1, s, 7));
//     printf("%s\n", strncpy(d1, s, 18));
// }
