// #include <stdio.h>
#include <stdbool.h>


int mx_sqrt(int x) {
    float result = x / 2;
    float last_result = 0;
    int i = 0;
    
    while (result > 0 && result * result != x) {
        if (last_result - result < 1 && last_result - result > -1)
            break;
        last_result = result;
        result = (result + x / result) / 2;
        // printf("i = %d\tval = %0.2f\n", i, result);
        ++i;
    }
    return (int)result * (int)result != x ? 0 : (int)result;
}

// #include <stdio.h>

// int main(void) {
//     int res = 0;
//     for (int i = 0; i < 2147483647; ++i) {
//         res = mx_sqrt(i);
//         if (res) {
//             printf("i = %d --- %d\n", i, res);    
//         }
//     }
    
//     printf("%d\n", mx_sqrt(-2345));
    
//     printf("%d\n", 1546 * 1546);
//     printf("%d\n", mx_sqrt(2392576));
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
