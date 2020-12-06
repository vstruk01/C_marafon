#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_narcissistic(int num) {
    int result = 0;
    int pow = 0;
    
    for (int n_copy = num; n_copy != 0; n_copy /= 10, ++pow) {}

    for (int i = 0, n_copy = num; n_copy > 0; ++i, n_copy /= 10)
        result += mx_pow(n_copy % 10 > 0 ? n_copy % 10 : n_copy % 10 * -1, pow);

    return result == 0 ? false : result == num ? true : false;
}

// #include <stdio.h>

// int main(void) {
//     printf("%d -- %s\n", 153, mx_narcissistic(153) ? "true" : "false");
//     printf("%d -- %s\n", 407, mx_narcissistic(407) ? "true" : "false");
//     printf("%d -- %s\n", 400, mx_narcissistic(400) ? "true" : "false");
//     printf("%d -- %s\n", 3, mx_narcissistic(3) ? "true" : "false");
//     printf("%d -- %s\n", -3, mx_narcissistic(-3) ? "true" : "false");
//     printf("%d -- %s\n", 10, mx_narcissistic(10) ? "true" : "false");
//     printf("%d -- %s\n", 0, mx_narcissistic(0) ? "true" : "false");
//     printf("%d -- %s\n", 370, mx_narcissistic(370) ? "true" : "false");
//     printf("%d -- %s\n", 371, mx_narcissistic(371) ? "true" : "false");
// }
