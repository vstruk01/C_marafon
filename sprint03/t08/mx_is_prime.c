#include <stdbool.h>

bool mx_is_prime(int num) {
    for (int i = num / 2; i > 1; --i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// #include <stdio.h>

// int main(void) {
//     printf("%d --- %s\n", 3, mx_is_prime(3) ? "true" : "false");
//     printf("%d --- %s\n", 7, mx_is_prime(7) ? "true" : "false");
//     printf("%d --- %s\n", 2147483647, mx_is_prime(2147483647) ? "true" : "false");
//     printf("%d --- %s\n", 234523, mx_is_prime(234523) ? "true" : "false");
//     printf("%d --- %s\n", 93662, mx_is_prime(93662) ? "true" : "false");
// }

