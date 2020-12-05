double mx_pow_rec(double n, unsigned int pow) {
    return pow < 1 ? 1 : mx_pow_rec(n, --pow) * n; 
}

// #include <stdio.h>
// #include <math.h>

// int main(void) {
//     printf("%f\n", mx_pow_rec(5, 4));
//     printf("%f\n", mx_pow_rec(0, 4));
//     printf("%f\n", mx_pow_rec(3, 0));
//     printf("%f\n", mx_pow_rec(3, 1));
//     printf("%f\n", mx_pow_rec(0, 0));
// }
