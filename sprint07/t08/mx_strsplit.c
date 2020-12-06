#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int mx_count_words(const char *str, char delimiter);
void mx_strdel(char **str);
char *mx_strnew(int size);
char *mx_strncpy(char *s1, const char *s2, int len);

char **mx_strsplit(const char *s, char c) {
    int count_words = 0;
    
    if (!s || (count_words = mx_count_words(s, c)) <= 0)
        return NULL;
    
    char **split = malloc(sizeof(char*) * count_words + 1);
    split[count_words] = NULL;
    
    for (int i = 0, len = 0; i < count_words; ++i, s += len, len = 0) {
        for (; *s == c; ++s);
        for (; s[len] != c; ++len);
        split[i] = mx_strnew(len);
        mx_strncpy(split[i], s, len);
    }
    return split;
}

// #include <stdio.h>

// int main(void) {
//     char s[] = "";
//     char **split = mx_strsplit(s, ' ');
//     for (int i = 0; split && split[i]; ++i) {
//         printf("%s\t", split[i]);
//     }
//     printf("\n");
// }

