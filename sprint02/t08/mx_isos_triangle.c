void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c) {
    for (unsigned int i = 0; i < length; ++i) {
        for (unsigned int j = 0; j <= i; ++j)
            mx_printchar(c);
        mx_printchar(10);
    }   
}

// int main(void) {
//     mx_isos_triangle(0, '#');
//     mx_isos_triangle(1, '#');
//     mx_isos_triangle(2, '#');
//     mx_isos_triangle(3, '#');
//     mx_isos_triangle(4, '#');
//     mx_isos_triangle(5, '#');
//     mx_isos_triangle(6, '#');
//     mx_isos_triangle(7, '#');
//     mx_isos_triangle(8, '#');
//     mx_isos_triangle(9, '#');
//     mx_isos_triangle(10, '#');
// }

