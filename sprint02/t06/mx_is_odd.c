#include <stdbool.h>

bool mx_id_odd(int value) {
    return value % 2 == 0 ? false : true;
}

// #include <stdio.h>

// int main(void) {
//     for (int i = 0; i < 16; ++i)
//         printf("%d is odd ? ->\t%s\n", i, mx_id_odd(i) ? "true" : "false");
// }

