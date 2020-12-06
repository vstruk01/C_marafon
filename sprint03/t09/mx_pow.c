double mx_pow(double n, unsigned int pow) {
    double result = 1;
    
    for (unsigned int i = 0; i < pow; ++i)
        result *= n;
    return result;
}

// #include <stdio.h>

// int main(void) {
//     printf("%f\n", mx_pow(2.5, 3));
//     printf("%f\n", mx_pow(-4.112, 2));
//     printf("%f\n", mx_pow(-12, 5));
//     for (int i = 0; i < 11; ++i) {
//         printf("%f\n", mx_pow(i, 2));
//         printf("%f\n", mx_pow(i, 3));
//         printf("%f\n", mx_pow(i, 4));
//         printf("%f\n", mx_pow(i, 5));
//     }
// }

