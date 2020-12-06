#include <stdbool.h>
#include <stdlib.h>

char *mx_strncpy(char *dst, const char *str, int len);
bool mx_isspace(char c);
int mx_strlen(const char *s);
char *mx_strnew(int size);

char *mx_strtrim(const char *str) {
    int f = 0;
    int l = 0;
    char *result = NULL;

    if (!str)
        return NULL;
    for (; mx_isspace(str[f]); ++f) {}
    for (l = mx_strlen(str) - 1; l >= f && mx_isspace(str[l]); --l) {}
    result = mx_strnew(l - f + 1);
    return result ? mx_strncpy(result, str + f, l - f + 1) : NULL;
}

// #include <stdio.h>

// int main(void) {
//     char s1[] = "\v\f\n\n\nCCCC\n\t     \f       ";
//     printf("defore -> (%s)\n", s1);    
//     char *s_trim = mx_strtrim(s1);
//     printf("after  -> (%s)\n", s_trim);
//     free(s_trim);
//     printf("%s\n", mx_strtrim(NULL));
//     printf("%s\n", mx_strtrim(""));
//     printf("%s\n", mx_strtrim("                                      "));
// }


