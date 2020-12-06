void mx_swap_char(char *s1, char *s2) {
    char t = *s1;
    *s1 = *s2;
    *s2 = t;
}

// #include <stdio.h>

// int main() {
//     char str[] = "ONE";
//     mx_swap_char(&str[0], &str[2]);
//     printf("%s\n", str);
//     mx_swap_char(&str[2], &str[1]);
//     printf("%s\n", str);
// }

