// #include <stdio.h>
#include <stdbool.h>


int mx_sqrt(int x) {
    float result = x / 2;
    float last_result = 0;
    int i = 0;
    
    while (result * result != x) {
        if (last_result - result < 1 && last_result - result > -1) {
            if ((int)result * (int)result != x)
                result = 0;
            break;
        }
        last_result = result;
        result = (result + x / result) / 2;
        // printf("i = %d\tval = %0.2f\n", i, result);
        ++i;
    }
    return result;
}

// #include <stdio.h>

// int main(void) {
//     printf("%d\n", mx_sqrt(0));
//     printf("%d\n", mx_sqrt(1));
//     printf("%d\n", mx_sqrt(2));
//     printf("%d\n", mx_sqrt(3));
//     printf("%d\n", mx_sqrt(4));
//     printf("%d\n", mx_sqrt(9));
//     printf("%d\n", mx_sqrt(16));
//     printf("%d\n", mx_sqrt(46340 * 46340));
//     printf("%d\n", mx_sqrt(2147483647));
// }
