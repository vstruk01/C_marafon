#ifndef CREATE_AGENTS_H
#define CREATE_AGENTS_H

#include <stdlib.h>

#include "agent.h"

t_agent **mx_create_agents(char **name, int *power, int *strength, int count);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, char *str);
char *mx_strdup(const char *s);

#endif

