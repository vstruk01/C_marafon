#include "create_agent.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    t_agent *agent;

    if (!name)
        return NULL;
    agent = malloc(sizeof(t_agent));
    agent->name = mx_strdup(name);
    agent->power = power;
    agent->strength = strength;

    return agent;
}

// #include <stdio.h>

// int main(void) {
//     t_agent *agent = mx_create_agent("necromant", 70, 80);
//     t_agent *agent1 = mx_create_agent("issue", 1, 4);
//     t_agent *agent2 = mx_create_agent("valik", 55, 66);
//     t_agent *agent3 = mx_create_agent("buldor", 22456236, 256711);
//     t_agent *agent4 = mx_create_agent(NULL, 0, 0);
//     printf("name = %s\npower = %d\nstrength = %d\n\n", agent->name, agent->power, agent->strength);
//     printf("name = %s\npower = %d\nstrength = %d\n\n", agent1->name, agent1->power, agent1->strength);
//     printf("name = %s\npower = %d\nstrength = %d\n\n", agent2->name, agent2->power, agent2->strength);
//     printf("name = %s\npower = %d\nstrength = %d\n\n", agent3->name, agent3->power, agent3->strength);
//     printf("agent = %p\n", (void*)agent4);
// }

