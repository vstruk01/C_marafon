#include <stdbool.h>
// #include <stdlib.h>
// #include <stdio.h>

bool mx_isspace(char c);
bool mx_isdigit(char c);


// static char *itoa(long long n) {
//     size_t size = 1;
//     char *str = malloc(2);

//     if (n == 0) {
//         str[0] = '0';
//         str[1] = '\0';
//         return str;
//     }
//     if (n < 0) {
//         str[0] = '-';
//         size++;
//     }
//     for (long long n_copy = n; n_copy != 0; n_copy /= 10, size++) {}
//     str = realloc(str, size);
//     for (long long n_copy = n, i = size - 2; n_copy != 0; n_copy /= 10, i--)
//         n_copy > 0 ? (str[i] = n_copy % 10 + 48) : (str[i] = ((n_copy % 10) * -1) + 48);
//     str[size - 1] = '\0';
//     return str;
// }


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
//     printf("%s\n", itoa(-2147483648));
//     long long i = -9223372036854775807 -1;
    
//     long long k = -9223372036854775807 + -1;
//     printf("%lld\n", k);
//     int imp = 0, std = 0;
    
//     for (long long i = 0; k < i; i += (-2147483648 + -2147483648)) {
//         imp = mx_atoi(itoa(i));
//         std = atoi(itoa(i));
//         if (imp != std) {
//             printf("%lld --- error", i);
//         }
//     }
    
    // printf("%s = %d\n", itoa(i), mx_atoi(itoa(i)));
    // printf("%s = %d\n", itoa(i), atoi(itoa(i)));
    // printf("%d\n", atoi(""));
    // printf("%d\n", atoi("ffff"));
    // printf("%d\n", mx_atoi(""));
    // printf("%d\n", mx_atoi("ffff"));
// }
