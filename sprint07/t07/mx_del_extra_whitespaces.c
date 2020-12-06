#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

char *mx_strnew(int size);
char *mx_strncpy(char *dst, const char *str, int len);
bool mx_isspace(char c);
int mx_strlen(const char *s);
char *mx_strtrim(const char *str);
void mx_strdel(char **str);

static char *get_result(int len, char *str);

char *mx_del_extra_whitespace(const char *str) {
    char *trim = NULL;
    char *result = NULL;
    int len = 0;
    
    if (str) {
        trim = mx_strtrim(str);
        
        for (int i = 0; trim[i] ; ++i) {
            if (mx_isspace(trim[i])) {
                for (; mx_isspace(trim[i]); ++i);
                ++len;
            } 
            if (!mx_isspace(trim[i]))
                ++len;
        }
        result = get_result(len, trim);
        mx_strdel(&trim);    
    }
    return result;
}

static char *get_result(int len, char *str) {
    char *result = mx_strnew(len);

    for (int i = 0, j = 0; str[i]; ++i, ++j) {
        if (mx_isspace(str[i])) {
            for (; mx_isspace(str[i]); ++i);
            result[j] = ' ';
            ++j;
        } 
        if (!mx_isspace(str[i]))
            result[j] = str[i];
    }
    return result;
}


// int main(void) {
//     char s[] = "\fMy name...is\r Neo\t\n";
//     char *s2 = mx_del_extra_whitespace(s);
//     printf("(%s)\n", s2);
//     mx_strdel(&s2);
// }
