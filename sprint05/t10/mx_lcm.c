int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
    return !a || !b ? 0 : ((a * b) > 0 ? a * b : a * b * -1) / mx_gcd(a, b);
}

// #include <stdio.h>

// int main(void) {
//     printf("%d\n", mx_lcm(0, 0));
//     printf("%d\n", mx_lcm(1, 1));
//     printf("%d\n", mx_lcm(-123, -1922));
//     printf("%d\n", mx_lcm(-1223, 432145));
//     printf("%d\n", mx_lcm(234, 2344));
//     printf("%d\n", mx_lcm(444, -4444));
//     printf("%d\n", mx_lcm(1323, 0));
//     printf("%d\n", mx_lcm(0, 2334));
// }
