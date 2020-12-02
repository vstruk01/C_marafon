int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    for (int i = mx_strlen(s1), j = 0; s2[j]; s1[i] = s2[j], j++, i++);
    s1[mx_strlen(s1) + mx_strlen(s2) - 1] = '\0';
    return s1;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char s1[13] = "Hello ";
//     char *s2 = "World!";
    
//     printf("%s\n", mx_strcat(s1, s2));
    
//     char s3[13] = "Hello ";
//     char *s4 = "World!";
    
//     printf("%s\n", strcat(s3, s4));
// }
