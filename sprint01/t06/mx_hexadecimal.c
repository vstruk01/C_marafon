void mx_printchar(char c);

void mx_hexadecimal(void) {
    for (char i = 48; i <= 57; ++i)
        mx_printchar(i);
    for (char i = 65; i <= 70; ++i)
        mx_printchar(i);
    mx_printchar(10);
}

// int main(void) {
//     mx_hexadecimal();
// }
