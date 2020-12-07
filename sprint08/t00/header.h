// #pragma once
#ifndef HEADER_H
#define HEADER_H

#include <stdbool.h>

typedef struct s_student {
    char *first_name;
    char *last_name;
    int age;
}              t_student;

void mx_printchar(char c); // ok
void mx_printint(int n); // ok
bool mx_isspace(char c); // ok
bool mx_isdigit(char c); // ok 
void mx_printstr(const char *str); // ok
int mx_strlen(const char *s); // ok
int mx_atoi(const char *str); // ok
int mx_strcmp(const char *s1, const char *s2); // ok
char *mx_strcpy(char *dst, char *str); // ok


#endif