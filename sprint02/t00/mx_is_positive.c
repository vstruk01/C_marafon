void mx_printstr(const char *s);

void mx_is_positive(int i) {
    mx_printstr(i > 0 ? "positive\n" : i == 0 ? "zero\n" : "negative\n");
} 

// int main(void) {
//     mx_is_positive(0);
//     mx_is_positive(1);
//     mx_is_positive(-1);
// }

