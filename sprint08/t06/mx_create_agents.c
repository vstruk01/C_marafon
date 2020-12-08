#include "create_agents.h"

t_agent **mx_create_agents(char **name, int *power, int *strength, int count) {
    t_agent **agents = NULL;
    
    if (!name || !power || !strength)
        return NULL;
        
    agents = malloc(sizeof(t_agent*) * (count + 1));
    agents[count] = NULL;
    
    for (int i = 0; i < count; ++i)
        agents[i] = mx_create_agent(name[i], power[i], strength[i]);
    return agents;
}

// #include <string.h>
// #include <stdio.h>

// int main(void) {
//     int count = 6;
    
//     char **name = calloc(sizeof(char*), count);
//     int *power = calloc(sizeof(int), count);
//     int *strength = calloc(sizeof(int), count);
    
//     for (int i = 0; i < count; ++i) {
//         name[i] = mx_strdup("name");
//         power[i] = i * 6;
//         strength[i] = i * 7;
//     }
//     t_agent **agents = mx_create_agents(name, power, strength, count);
//     for (int i = 0; i < count; ++i) {
//         printf("name     -> %s\n", agents[i]->name);
//         printf("power    -> %d\n", agents[i]->power);
//         printf("strength -> %d\n\n", agents[i]->strength);
//         free(name[i]);
//         free(agents[i]->name);
//         free(agents[i]);
//     }
//     free(name);
//     free(power);
//     free(strength);
//     free(agents);
//     agents = NULL;
// }

