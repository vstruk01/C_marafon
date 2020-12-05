#include <stdbool.h>

int mx_atoi(const char *str);
bool mx_isdigit(char c);
void mx_printchar(char c);

int main(int argc, char **argv) {
    int number = 0;
    
    for (int i = 1; i < argc; i++) {
        number = mx_atoi(argv[i]);
        for (int k = sizeof(number) * 8 - 1; k >= 0; --k) {
            number & -2147483648 ? mx_printchar('1') : mx_printchar('0');
            number = number << 1;
            // if (!(k % 8))
            //     mx_printchar(' ');
        }
        mx_printchar('\n');
    }
}
