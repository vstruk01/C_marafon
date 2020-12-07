#include "get_address.h"

char *mx_strnew(const int size) {
    char *strnew = malloc(size < 0 ? size : size + 1);
    
    for (int i = 0; strnew && i <= size; ++i)
        strnew[i] = '\0';
    return strnew;
}
