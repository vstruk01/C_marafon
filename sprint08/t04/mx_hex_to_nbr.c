#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long result = 0;

    for (; hex && *hex; ++hex) {
        if (!(*hex >= '0' && *hex <= '9') 
             && !(*hex >= 'A' && *hex <= 'F')
             && !(*hex >= 'a' && *hex <= 'f')) {
            return 0;
        }
        result += *hex > 57 ? *hex > 'Z' ? *hex - 87 : *hex - 55 : *hex - 48;
        if (*(hex + 1))
            result *= 16;
    }
    return result;
}

#include <stdio.h>

int main(void) {
    printf("nbr = %lu\n", mx_hex_to_nbr("AAAAAAAAAAAAAAA"));
    printf("nbr = %lu\n", mx_hex_to_nbr("ff"));
    printf("nbr = %lu\n", mx_hex_to_nbr("0"));
    printf("nbr = %lu\n", mx_hex_to_nbr("1"));
    printf("nbr = %lu\n", mx_hex_to_nbr("ffffffffffff"));
    printf("nbr = %lu\n", mx_hex_to_nbr("f1п"));
}
