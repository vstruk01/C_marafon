#include <stdbool.h>

bool mx_is_prime(int num);
double mx_pow(double n, unsigned int pow);

bool mx_is_mersenne(int n) {
    int pow = 0;
    
    if (!mx_is_prime(n))
        return false;
    
    for (int i = 1; pow < n; ++i) {
        pow = mx_pow(2, i);
        if (pow - 1 == n) {
            return true;
        }
    }
    return false;
}

// #include <stdio.h>

// int main(void) {
//     printf("%d --- %s\n", 1, mx_is_mersenne(1) ? "true" : "false");
//     printf("%d --- %s\n", 3, mx_is_mersenne(3) ? "true" : "false");
//     printf("%d --- %s\n", 7, mx_is_mersenne(7) ? "true" : "false");
//     printf("%d --- %s\n", 15, mx_is_mersenne(15) ? "true" : "false");
//     printf("%d --- %s\n", 31, mx_is_mersenne(31) ? "true" : "false");
//     printf("%d --- %s\n", 127, mx_is_mersenne(127) ? "true" : "false");
//     printf("%d --- %s\n", 2147483647, mx_is_mersenne(2147483647) ? "true" : "false");
//     printf("%d --- %s\n", 2147483646, mx_is_mersenne(2147483646) ? "true" : "false");
// }

