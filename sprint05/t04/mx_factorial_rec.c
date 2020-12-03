int mx_factorial_int(int n) {
    int result = 0;
    
    if (n < 1)
        return 0;
    if (n == 1)
        return 1;

    result = mx_factorial_int(n - 1);
    if (result != 0 && 2147483647 / result < n) // 2147483647 - max int
        return 0;
    return result *= n;
}

#include <stdio.h>

int main() {
    printf("0  %d\n", mx_factorial_int(0));
    printf("1  %d\n", mx_factorial_int(1));
    printf("2  %d\n", mx_factorial_int(2));
    printf("3  %d\n", mx_factorial_int(3));
    printf("4  %d\n", mx_factorial_int(4));
    printf("5  %d\n", mx_factorial_int(5));
    printf("6  %d\n", mx_factorial_int(6));
    printf("7  %d\n", mx_factorial_int(7));
    printf("8  %d\n", mx_factorial_int(8));
    printf("9  %d\n", mx_factorial_int(9));
    printf("10 %d\n", mx_factorial_int(10));
    printf("11 %d\n", mx_factorial_int(11));
    printf("12 %d\n", mx_factorial_int(12));
    printf("13 %d\n", mx_factorial_int(13));
    printf("14 %d\n", mx_factorial_int(14));
    printf("15 %d\n", mx_factorial_int(15));
    printf("16 %d\n", mx_factorial_int(16));
}

