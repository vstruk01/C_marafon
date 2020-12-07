#include "get_address.h"

char *mx_get_address(void *p) {
    char *address = mx_nbr_to_hex((long)p);
    char *result = mx_strnew(2 + mx_strlen(address));
    
    mx_strcpy(result, "0x");
    mx_strcpy(result + 2, address);
    free(address);
    address = NULL;

    return result;
}

// #include <stdio.h>

// int main(void) {
//     void *point = malloc(10);
    
//     printf("point = %p\n", point);
//     printf("point = %s\n", mx_get_address(point));
//     printf("null  = %s\n", mx_get_address(NULL));
// }

