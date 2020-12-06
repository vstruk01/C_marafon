#include <stdbool.h>

bool mx_isalpha(int c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ? true : false;
}

#include <stdio.h>

int main(void) {
    for (char i = 32; i < 127; ++i)
        printf("%c -> %s\n", i, mx_isalpha(i) ? "true" : "false");
}

