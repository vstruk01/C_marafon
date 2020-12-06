#include <stdio.h>

int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    for (int i = mx_strlen(s1), j = 0; s2[j]; s1[i] = s2[j], ++j, ++i);
    s1[mx_strlen(s1) + mx_strlen(s2) - 1] = '\0';
    return s1;
}

// char* my_strcat(char* destination, const char* source) {
//     char* ptr = destination + mx_strlen(destination);
 
//     while (*source != '\0')
//         *ptr++ = *source++;
//     *ptr = '\0';
//     return destination;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char s1[20] = "";
//     char s2[20] = "";
//     char s3[20] = "";
    
//     printf("%lu\n%lu\n%lu\n", (long)s1, (long)s2, (long)s3);
    
//     char *ss1 = "yo neo bro";
//     char *ss2 = "yo neo bro";
//     char *ss3 = "yo neo bro";

//     char *r1 = mx_strcat(s1, ss1);
//     char *r2 = strcat(s2, ss2);
//     char *r3 = my_strcat(s3, ss3);
    
//     long l = (long)r1;
    
//     printf("mx  = (%s)\nlen = %lu\n\n", (void*)l, strlen(r1));
//     printf("std = (%s)\nlen = %lu\n\n", r2, strlen(r2));
//     printf("my  = (%s)\nlen = %lu\n\n", r3, strlen(r3));

//     printf("%lu\n%lu\n%lu\n", (long)r1, (long)r2, (long)r3);
// }
