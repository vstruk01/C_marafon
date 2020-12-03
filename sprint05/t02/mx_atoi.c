#include <stdbool.h>

bool mx_isspace(char c);
bool mx_isdigit(char c);

int mx_atoi(const char *str) {
    int result = 0, pos = 0;
    bool sign = false;

    for (; mx_isspace(str[pos]); ++pos);
    if ((str[pos] == '+' || str[pos] == '-') && ++pos)
        if (str[pos - 1] == '-' && (sign = true)) {}
    for (; mx_isdigit(str[pos]); result = result * 10 + str[pos] - 48,  ++pos);
    if (sign && (result *= -1)) {}
    return result;
}

// #include <stdio.h>

// int main(void) {
//     printf("%d\n", mx_atoi("  d -1"));
//     printf("%d\n", mx_atoi("+ 18"));
//     printf("%d\n", mx_atoi("   -10 99"));
//     printf("%d\n", mx_atoi("   - 998"));
//     printf("%d\n", mx_atoi("98 4"));
//     printf("%d\n", mx_atoi("2147483647"));
//     printf("%d\n", mx_atoi("-2147483648"));
// }
