void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
    for (; str && *str; ++str) {
        if (*str == delim) {
            mx_printchar('\n');
            for (; *str == delim; ++str) {}
        }
        if (*str) {
            mx_printchar(*str);
        } else {
            break;
        }
    }
}

// int main(void) {
//     mx_str_separate("game over", 'v');
//     mx_printchar('\n');
//     mx_str_separate("game over", 'o');
//     mx_printchar('\n');
//     mx_str_separate("ooooooooo", 'o');
//     mx_printchar('\n');
//     mx_str_separate("abababababababa", 'b');
//     mx_printchar('\n');
// }

