#include <stdbool.h>
#include <stdlib.h>

void mx_printchar(char c);

// static char *itoa(int n) {
//     size_t size = 1;
//     char *str = malloc(2);

//     if (n == 0) {
//         str[0] = '0';
//         str[1] = '\0';
//         return str;
//     }
//     if (n < 0) {
//         str[0] = '-';
//         n *= -1;
//         size++;
//     }
//     for (int n_copy = n; n_copy != 0; n_copy /= 10, size++) {}
//     str = realloc(str, size);
//     for (int n_copy = n, i = size - 2; n_copy != 0; n_copy /= 10, i--)
//         str[i] = n_copy % 10 + 48;
//     str[size - 1] = '\0';
//     return str;
// }

static void printint_recursive(int n);

void mx_printint(int n) {
    // for (char *str_n = itoa(n); *str_n; str_n++) {
    //     mx_printchar(*str_n);
    // }
    if (n == 0)
        mx_printchar(n + 48);
    if (n < 0)
        mx_printchar('-');
    printint_recursive(n);
}

static void printint_recursive(int n) {
    if (n == 0)
        return;
    printint_recursive(n / 10);
    n > 0 ? mx_printchar(n % 10 + 48) : mx_printchar((n % 10) * -1 + 48);
}
