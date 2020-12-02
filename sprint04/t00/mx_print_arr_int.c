void mx_printchar(char c);
void mx_printint(int n);

void mx_print_arr_int(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        mx_printint(arr[i]);
        mx_printchar('\n');
    }
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main(int argc, char **argv) {
//     int *arr = malloc(sizeof(int) * argc - 1);
    
//     for (int i = 1; i < argc; i++) {
//         arr[i - 1] = atoi(argv[i]);
//     }
//     mx_print_arr_int(arr, argc - 1);
// }
