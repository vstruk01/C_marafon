#include <stdbool.h>

bool mx_multiple_number(int n, int mult) {
    return mult % n == 0 ? true : false;
}

// #include <stdio.h>

// int main(void) {
//     printf("%d is mult %d --- %s\n", 3, 9, mx_multiple_number(3, 9) ? "true" : "false");
//     printf("%d is mult %d --- %s\n", 4, 9, mx_multiple_number(4, 9) ? "true" : "false");
//     printf("%d is mult %d --- %s\n", 4, 16, mx_multiple_number(4, 16) ? "true" : "false");
//     printf("%d is mult %d --- %s\n", 43, 43, mx_multiple_number(43, 43) ? "true" : "false");
// }

