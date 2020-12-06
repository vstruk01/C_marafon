#include <stdbool.h>

bool mx_islower(int c);
bool mx_isupper(int c);
int mx_toupper(int c);
int mx_tolower(int c);

void mx_reverse_case(char *s) {
    for (int i = 0; s && s[i]; ++i) {
        if (mx_islower(s[i])) {
            s[i] = mx_toupper(s[i]);
        } else if (mx_isupper(s[i])) {
            s[i] = mx_tolower(s[i]);
        }
    }
}

// #include <stdio.h>

// int main(void) {
//     char s1[] = "HeLLo WoRLD!";
//     char s2[] = "';.,l';D.f.LF.fFLFLC,DCSCS";
    
//     mx_reverse_case(s1);
//     mx_reverse_case(s2);
//     mx_reverse_case(NULL);
    
//     printf("%s\n", s1);
//     printf("%s\n", s2);
// }
