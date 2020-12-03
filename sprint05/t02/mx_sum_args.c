#include <stdbool.h>

int mx_atoi(const char *str);
void mx_printint(int n);
bool mx_isdigit(char c);
void mx_printchar(char c);

int main(int argc, char **argv) {
    for (int i = 1, result = 0; i <= argc; i++) {
        if (i == argc) {
            mx_printint(result);
            mx_printchar('\n');
            break;
        }
        for (int j = 0;!argv[i][j] || mx_isdigit(argv[i][j]) || ((argv[i][j] == '-' || argv[i][j] == '+') && j == 0); j++) {
            if (!argv[i][j]) {
                result += mx_atoi(argv[i]);
                break;
            }
        }   
    }
}
