int mx_strncmp(const char *s1, const char *s2, int n) {
    for (;*s1 != '\0' && *s2 != '\0' && n > 0 && *s1 == *s2; n--, s1++, s2++);
    return *s1 == *s2 ? 0 : *s1 > *s2 ? 1 : -1;
}

// #include <stdio.h>

// int main(void) {
//     printf("expected =  0, result =  %d\n", mx_strncmp("vlad", "vlad", 4));
//     printf("expected = -1, result = %d\n", mx_strncmp("alad", "flad", 1));
//     printf("expected = -1, result = %d\n", mx_strncmp("alad", "blad", 4));
//     printf("expected =  0, result =  z%d\n", mx_strncmp("vldd", "vlad", 2));
//     printf("expected =  1, result =  %d\n", mx_strncmp("blad", "alad", 4));
//     printf("expected = -1, result = %d\n", mx_strncmp("vlad", "vlbd", 3));
// }
