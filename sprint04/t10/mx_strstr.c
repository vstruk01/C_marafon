// #include <stdio.h>

char *mx_strstr(const char *s1, const char *s2) {
    if (!*s2)
        return (char*)s1;

    for (;s1 && *s1; ++s1) {
        char *s_copy = (char*)s1;

        for (;s2 && *s_copy == *s2; ++s_copy, ++s2) {
            if (!*(s2 + 1))
                return (char*)s1;
        }
        s2 -= (s_copy - s1);
    }
    return NULL;
}

// #include <string.h>

// int main(void) {
//     printf("%s\n", mx_strstr("bbbbbbb", "g"));
//     printf("%s\n\n", strstr("bbbbbbbs", "g"));
    
//     printf("%s\n", mx_strstr("bbbbbbbs", "s"));
//     printf("%s\n\n", strstr("bbbbbbbs", "s"));
    
    
//     printf("%s\n", mx_strstr("ab", "b"));
//     printf("%s\n\n", strstr("ab", "b"));
    
//     printf("%s\n", mx_strstr("strsrrstr", "st"));
//     printf("%s\n\n", strstr("strsrrstr", "st"));
    
//     printf("%s\n", mx_strstr("strsrrstr", "str"));
//     printf("%s\n\n", strstr("strsrrstr", "str"));
    
//     printf("%s\n", mx_strstr("strsrrstr", "strsrrstr"));
//     printf("%s\n\n", strstr("strsrrstr", "strsrrstr"));
    
//     printf("%s\n", mx_strstr("strsrrstr", "t"));
//     printf("%s\n\n", strstr("strsrrstr", "t"));
    
//     printf("%s\n", mx_strstr("strsrrstr", "r"));
//     printf("%s\n\n", strstr("strsrrstr", "r"));
    
//     printf("%s\n", mx_strstr("strsrrstr", "srr"));
//     printf("%s\n\n", strstr("strsrrstr", "srr"));
// }
