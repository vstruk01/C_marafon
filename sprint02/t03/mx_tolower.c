int mx_tolower(int c) {
    return c >= 'A' && c <= 'Z' ? c + 32 : c;
}

// #include <stdio.h>

// int main(void) {
//     printf("%c\n", mx_tolower('Z'));
//     printf("%c\n", mx_tolower('z'));
//     printf("%c\n", mx_tolower('A'));
//     printf("%c\n", mx_tolower('a'));
// }

