void mx_printchar(char c);

void mx_print_alphabet(void) {
    for (int i = 65; i < 91; ++i)
        mx_printchar(i % 2 == 0 ? i + 32 : i);
    mx_printchar(10);
}

// int main(void) {
//     mx_print_alphabet();
// }
