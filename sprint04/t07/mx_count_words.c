int mx_count_words(const char *str, char delimiter) {
    int counter = 0;
    
    for (;*str; ++str) {
        if (*str != delimiter && ++counter)
            for (;*(str + 1) && *str != delimiter; ++str);
    }
    return counter;
}


// #include <stdio.h>

// int main() {
//     printf("== %d\n", mx_count_words("  follow  *   the  white rabbit ", '*'));
//     printf("== %d\n", mx_count_words("  follow  *   the  white rabbit ", ' '));
//     printf("== %d\n", mx_count_words("aaaaaaaaa", 'a'));
//     printf("== %d\n", mx_count_words("a a a a a a a a a a a ", ' '));
//     printf("== %d\n", mx_count_words("a a a a a a a a a a a ", 'a'));
// }
