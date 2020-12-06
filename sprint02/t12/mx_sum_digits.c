int mx_sum_digits(int n) {
    int result = 0;
    
    while (n != 0) {
        result += n % 10 >= 0 ? n % 10 : n % 10 * -1;
        n /= 10;
    }
    return result;
}

// #include <stdio.h>

// int main(void) {
//     printf("%d\n", mx_sum_digits(1111111111));
//     printf("%d\n", mx_sum_digits(222222222));
//     printf("%d\n", mx_sum_digits(1234567890));
//     printf("%d\n", mx_sum_digits(2147483647));
//     printf("%d\n", mx_sum_digits(-2147483648));
//     printf("%d\n", mx_sum_digits(-999999999));
//     printf("%d\n", mx_sum_digits(999999999));    
//     printf("%d\n", mx_sum_digits(-888888888));
// }

