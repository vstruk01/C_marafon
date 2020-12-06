char *mx_strcpy(char *dst, char *str) {
    int i = 0;
    
    for (;str[i]; dst[i] = str[i], ++i);
    dst[i] = '\0';
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
//     printf("%s\n", mx_strcpy(d, s));
//     printf("%s\n", mx_strcpy(d, s));
//     printf("%s\n", mx_strcpy(d, s));
//     printf("%s\n", mx_strcpy(d, s));
//     printf("%s\n", mx_strcpy(d, s));
//     printf("%s\n\n", mx_strcpy(d, s));
    
//     char *d1 = malloc(100);
//     printf("%s\n", strcpy(d1, s));
//     printf("%s\n", strcpy(d1, s));
//     printf("%s\n", strcpy(d1, s));
//     printf("%s\n", strcpy(d1, s));
//     printf("%s\n", strcpy(d1, s));
//     printf("%s\n", strcpy(d1, s));
// }

