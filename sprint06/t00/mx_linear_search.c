int mx_strcmp(const char *s1, const char *s2);

int mx_linear_search(const char **arr, const char *s) {
    for (int i = 0; arr && arr[i]; ++i) {
        if (!mx_strcmp(arr[i], s))
            return i;
    }
    return -1;
}

// #include <stdio.h>

// int main(int argc, char **argv) {
//     ++argc;
//     printf("%d\n", mx_linear_search((const char **)argv, "a"));
//     printf("%d\n", mx_linear_search((const char **)argv, "b"));
//     printf("%d\n", mx_linear_search((const char **)argv, "c"));
//     printf("%d\n", mx_linear_search((const char **)argv, "d"));
//     printf("%d\n", mx_linear_search((const char **)argv, "f"));
//     printf("%d\n", mx_linear_search((const char **)argv, "g"));
//     printf("%d\n", mx_linear_search((const char **)argv, "jac"));
// }

