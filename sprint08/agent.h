#ifndef AGENT_H
#define AGENT_H

typedef struct s_agent {
    char *name;
    int power;
    int strength;
}              t_agent;

t_agent *mx_create_agent(char *name, int power, int strength);

#endif

