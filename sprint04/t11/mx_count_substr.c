char *mx_strstr(const char *str, const char *sub);
int mx_strlen(const char *s);

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    
    for (;sub && str && *str; str += mx_strlen(sub), ++count) {
        str = mx_strstr(str, sub);
        if (!str)
            break;
    }
    return count;
}

// #include <stdio.h>

// int main(void) {
//     printf("0  ---  %d\n", mx_count_substr("ooooo", NULL));
//     printf("0  ---  %d\n", mx_count_substr(NULL, "o"));
//     printf("0  ---  %d\n", mx_count_substr(NULL, NULL));
//     printf("0  ---  %d\n", mx_count_substr("fffff", ""));
//     printf("10 ---  %d\n", mx_count_substr("oooooooooo", "o"));
//     printf("2  ---  %d\n", mx_count_substr("oooooooooo", "ooooo"));
//     printf("1  ---  %d\n", mx_count_substr("Hello World!", "Hello"));
//     printf("4  ---  %d\n", mx_count_substr("yo yo yo yo", "yo"));
//     printf("0  ---  %d\n", mx_count_substr("", "o"));
// }
