void mx_printstr(const char *str);
void mx_printint(int n);
void mx_printchar(char c);

int main(int argc, char **argv) {
    mx_printint(argc);
    mx_printchar('\n');
    while (*(++argv)) {
        mx_printstr(*argv);
        mx_printchar('\n');
    }
}
