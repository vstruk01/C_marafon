#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strcat(const char *s1, const char *s2);
char *mx_strnew(int size);

char *mx_concat_words(char **words) {
    int len = 0;
    char *result = NULL;
    
    if (!words)
        return NULL;
        
    for (int i = 0; words[i]; len += mx_strlen(words[i]), ++len, ++i){}
    result = mx_strnew(len - 1);
    for (int i = 0; words[i]; ++i) {
        mx_strcat(result, words[i]);
        if (words[i + 1])
            mx_strcat(result, " ");
    }
    return result;
}

// #include <stdio.h>

// int main(void) {
//     char *arr[] = {"Hello", "World!", "I want", "to say", "that", "I am", "programer", NULL};
    
//     char *str = mx_concat_words(arr);
//     printf("%s\n", str);
//     free(str);
// }

