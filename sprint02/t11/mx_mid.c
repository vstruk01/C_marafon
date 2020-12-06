int mx_mid(int a, int b, int c) {
    if ((a >= b && a <= c) || (a <= b && a >= c))
        return a;
    if ((a <= b && b <= c) || (a >= b && b >= c))
        return b;
    return c;
}

// #include <stdio.h>

// int main(void) {
//     printf("%d\n", mx_mid(-1, -1, 0));
//     printf("%d\n", mx_mid(1, 2, 2));
//     printf("%d\n", mx_mid(1, 1, 1));
//     printf("%d\n", mx_mid(1, 2, 3));
//     printf("%d\n", mx_mid(322, 2444, 22334));
//     printf("%d\n", mx_mid(-1, -3, -2));
//     printf("%d\n", mx_mid(-1, -2, -3));
//     printf("%d\n", mx_mid(-3, -2, -1));
// }

