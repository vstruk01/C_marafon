#ifndef GET_ADDRESS_H
#define GET_ADDRESS_H

#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, char *str);
char *mx_get_address(void *p);
char *mx_strnew(int size);
char *mx_nbr_to_hex(unsigned long nbr);

#endif
