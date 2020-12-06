int mx_factorial_int(int n) {
    for (int i = 1, result = 1; i <= n; i++) {
        if (2147483647 / result < n) // 2147483647 - max int
            return 0;
        result *= i;
        if (i == n)
            return result;
    }
    return n == 0 ? 1 : 0;
}

// #include <stdio.h>

// int main() {
//     printf("0  %d\n", mx_factorial_int(0));
//     printf("1  %d\n", mx_factorial_int(1));
//     printf("2  %d\n", mx_factorial_int(2));
//     printf("3  %d\n", mx_factorial_int(3));
//     printf("4  %d\n", mx_factorial_int(4));
//     printf("5  %d\n", mx_factorial_int(5));
//     printf("6  %d\n", mx_factorial_int(6));
//     printf("7  %d\n", mx_factorial_int(7));
//     printf("8  %d\n", mx_factorial_int(8));
//     printf("9  %d\n", mx_factorial_int(9));
//     printf("10 %d\n", mx_factorial_int(10));
//     printf("11 %d\n", mx_factorial_int(11));
//     printf("12 %d\n", mx_factorial_int(12));
//     printf("13 %d\n", mx_factorial_int(13));
//     printf("14 %d\n", mx_factorial_int(14));
//     printf("15 %d\n", mx_factorial_int(15));
//     printf("16 %d\n", mx_factorial_int(16));
// }
