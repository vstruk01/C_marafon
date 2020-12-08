#ifndef ONLY_SMITHS_H
#define ONLY_SMITHS_H

#include "agent.h"

#include <stdlib.h>

t_agent **mx_only_smiths(t_agent **agents, int strength);
t_agent *mx_create_agent(char *name, int power, int strength); 
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, char *str);
char *mx_strdup(const char *s);
int mx_strcmp(const char *s1, const char *s2);

#endif
