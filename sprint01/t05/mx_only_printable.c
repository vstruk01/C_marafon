void mx_printchar(char c);

void mx_only_printable(void) {
    for (char i = 126; i >= 32; --i)
        mx_printchar(i);
    mx_printchar('\n');
}

// int main(void) {
//     mx_only_printable();    
// }

