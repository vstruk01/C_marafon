#include <stdbool.h>

int mx_atoi(const char *str);
bool mx_isdigit(char c);
void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);

static bool validator(char **argv);

int main(int argc, char **argv) {
    int big;
    int small;
    
    if (argc != 3 || validator(argv))
        return 1;
    
    if (mx_atoi(argv[1]) > mx_atoi(argv[2])) {
        big = mx_atoi(argv[1]);
        small = mx_atoi(argv[2]);
    } else {
        big = mx_atoi(argv[2]);
        small = mx_atoi(argv[1]);
    }
    
    for (int i = small; i <= big; ++i) {
        for (int j = small; j <= big; ++j) {
            mx_printint(i * j);
            j == big ? mx_printchar('\n') : mx_printchar('\t');
        }
    }
}

static bool validator(char **argv) {
    if (mx_atoi(argv[1]) <= 0 || mx_atoi(argv[2]) <= 0
        || mx_atoi(argv[1]) >= 10 || mx_atoi(argv[2]) >= 10
        || mx_strlen(argv[1]) > 2 || mx_strlen(argv[2]) > 2
        || (mx_strlen(argv[1]) == 2 && !mx_isdigit(argv[1][1]))
        || (mx_strlen(argv[2]) == 2 && !mx_isdigit(argv[2][1]))){
            return 1;    
    }
    return 0;
}
