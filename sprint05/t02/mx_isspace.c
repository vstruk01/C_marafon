#include <stdbool.h>

bool mx_isspace(char c) {
    return c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v' || c == ' ';
}
