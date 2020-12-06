int mx_max(int a, int b, int c) {
    return a > b && a > c ? a : b > c && b > a ? b : c;
}

// #include <stdio.h>

// int main(void) {
//     printf("1 -- %d\n", mx_max(-1, 0, 1));
//     printf("2 -- %d\n", mx_max(2, 0, 1));
//     printf("3 -- %d\n", mx_max(2, 3, 1));
//     printf("5 -- %d\n", mx_max(2, 0, 5));
//     printf("23452345 -- %d\n", mx_max(2, 0, 23452345));
//     printf("12314 -- %d\n", mx_max(12314, -13123, 1234));
// }
