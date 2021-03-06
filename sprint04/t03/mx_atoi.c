#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

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
    unsigned long long int result = 0;
    int pos = 0;
    int sign = 1;

    for (; mx_isspace(str[pos]); ++pos);
    if ((str[pos] == '+' || (str[pos] == '-' && (sign = -1))) && ++pos) {}
    for (; mx_isdigit(str[pos]); ++pos)
        result = result * 10 + str[pos] - 48;
    return result * sign;
}



// #include <stdio.h>

// int main(void) {
//     for (long long i = 2157; i < 216748; i++) {}
//         printf("%d\n", atoi(itoa(i)));
    // for (unsigned int i = 2147483247; i < 2147483647; i++);
    // printf("%d\t\t%d\n", mx_atoi("2147483647"), atoi("2147483647"));
    // printf("%d\t\t%d\n", mx_atoi("2147483648"), atoi("2147483648"));
    // printf("%d\t\t%d\n", mx_atoi("2147483649"), atoi("2147483649"));
    // printf("%d\t\t%d\n", mx_atoi("-2147483649"), atoi("-2147483649"));
    // printf("%d\t\t%d\n", mx_atoi("-2147483650"), atoi("-2147483650"));
    
    // printf("%d\n", atoi("2147483647" ));
    // printf("%d\n", atoi("2147483648" ));
    // printf("%d\n", atoi("2147483649" ));
    // printf("%d\n", atoi("-2147483649"));
    // printf("%d\n", atoi("-2147483650"));
    
        

    // printf("%d\n", atoi(""));
    // printf("%d\n", atoi("ffff"));
    // printf("%d\n", mx_atoi(""));
    // printf("%d\n", mx_atoi("ffff"));
// }
