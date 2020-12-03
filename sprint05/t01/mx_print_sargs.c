#include <stdio.h>

void mx_printstr(const char *str);
void mx_printint(int n);
void mx_printchar(char c);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char **argv) {
    char *tmp = NULL;
    
    for (int i = 1; i < argc; i++) {
        for (int j = 1; j < argc - i; j++) {
            if (mx_strcmp(argv[j], argv[j + 1]) > 0) {
                tmp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = tmp;
            }
        }
    }
    
    while (*(++argv)) {
        mx_printstr(*argv);
        mx_printchar('\n');
    }
}
