void mx_swap_char(char *s1, char *s2);
int mx_strlen(const char *s);

void mx_str_reverse(char *s) {
    for (int f = 0, l = mx_strlen(s) - 1; f < l; ++f, --l)
        mx_swap_char(&s[f], &s[l]);
}

// #include <stdio.h>

// int main() {
//     char s1[] = "aaabbb";
//     char s2[] = "abcdiedg";
//     char s3[] = "abc";
    
//     mx_str_reverse(s1);
//     mx_str_reverse(s2);
//     mx_str_reverse(s3);
    
//     printf("%s\n", s1);
//     printf("%s\n", s2);
//     printf("%s\n", s3);
// }

