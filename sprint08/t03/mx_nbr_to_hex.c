#include "nbr_to_hex.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    int len = 0;
    char *result = NULL;

    for (unsigned long nbr_c = nbr; nbr_c != 0; ++len, nbr_c /= 16);
    result = mx_strnew(len == 0 ? ++len : len);
    for (int i = len - 1, n = nbr % 16; i >= 0; nbr /= 16, --i, n = nbr % 16)
        result[i] = n > 9 ? n + 87 : n + 48;
    return result;
}


// #include <stdio.h>

// int main(void) {
//     printf("res = %s\n", mx_nbr_to_hex(0));
//     printf("res = %s\n", mx_nbr_to_hex(52));
//     printf("res = %s\n", mx_nbr_to_hex(252354314));
//     printf("res = %s\n", mx_nbr_to_hex(100));
//     printf("res = %s\n", mx_nbr_to_hex(1000));
//     printf("res = %s\n", mx_nbr_to_hex(10000));
//     printf("res = %s\n", mx_nbr_to_hex(100000));
// }
