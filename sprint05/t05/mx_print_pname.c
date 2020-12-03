int mx_strlen(const char *s);
void mx_printstr(const char *str);
void mx_printchar(char c);

int main(int argc, char **argv) {
    for (argv[0] = argv[0] += mx_strlen(argv[0]), argc = argc + 1; *(argv[0] - 1) != '/'; --(argv[0])){}
    mx_printstr(argv[0]);
    mx_printchar('\n');
}

