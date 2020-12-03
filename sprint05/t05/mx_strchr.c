#include <stdio.h>

char *mx_strchr(const char *s, int c) {
    for (;*s; s++) {
        if (*s == c)
            return (char *)s;
    }
    return NULL;
}

// #include <string.h>

// int main() {
//     char *s = "saaabbbcccdddfffgggeee";
//     printf("%s\n", mx_strchr(s, 's'));
//     printf("%s\n\n", strchr(s, 's'));
    
//     printf("%s\n", mx_strchr(s, 'a'));
//     printf("%s\n\n", strchr(s, 'a'));
    
//     printf("%s\n", mx_strchr(s, 'b'));
//     printf("%s\n\n", strchr(s, 'b'));
    
//     printf("%s\n", mx_strchr(s, 'c'));
//     printf("%s\n\n", strchr(s, 'c'));
    
//     printf("%s\n", mx_strchr(s, 'f'));
//     printf("%s\n\n", strchr(s, 'f'));
    
//     printf("%s\n", mx_strchr(s, 'g'));
//     printf("%s\n\n", strchr(s, 'g'));
    
//     printf("%s\n", mx_strchr(s, 'e'));
//     printf("%s\n\n", strchr(s, 'e'));
    
    
    // printf("%p\n", (void*)mx_strchr(NULL, 'g'));
    // printf("%p\n\n", (void*)strchr(NULL, 'g'));
// }
