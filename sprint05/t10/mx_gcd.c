int mx_gcd(int a, int b) {
    b = b < 0 ? b * -1 : b;
    a = a < 0 ? a * -1 : a;
    return b == 0 ? a : a > b ? mx_gcd(b, a % b) : mx_gcd(a, b % a);
    // return b == 0 ? a : (a < 0 ? a *= -1 : a) > (b < 0 ? b *= -1 : b) ? mx_gcd(b, a % b) : mx_gcd(a, b % a);
}

// #include <stdio.h>

// int main(void) {
//     printf("%d\n", mx_gcd(-20, 20));
//     printf("%d\n", mx_gcd(-15, -20));
//     printf("%d\n", mx_gcd(-200, -400));
//     printf("%d\n", mx_gcd(0, 0));
// }
