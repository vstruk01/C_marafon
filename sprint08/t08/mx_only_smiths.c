#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength) {
    t_agent **smiths = NULL;
    int count_Smiths = 0;
    
    if (!agents)
        return NULL;
    for (int i = 0; agents[i]; ++i) {
        if (mx_strcmp(agents[i]->name, "Smiths") == 0
            && agents[i]->strength <= strength && ++count_Smiths) {}
    }
    smiths = (t_agent**)malloc(sizeof(t_agent*) * (count_Smiths + 1));
    smiths[count_Smiths] = NULL;
    for (int i = 0; i < count_Smiths; ++agents) {
        if (mx_strcmp((*agents)->name, "Smiths") == 0 
            && (*agents)->strength <= strength) {
            smiths[i] = mx_create_agent((*agents)->name, (*agents)->power, (*agents)->strength);
            ++i;
        }
    }
    return smiths;
}

// #include <stdio.h>

// int main(void) {
//     int count = 100;
    
//     t_agent **agents = malloc(sizeof(t_agent*) * (count + 1));
//     agents[count] = NULL;
    
//     for (int i = 0; i < count; ++i) {
//         agents[i] = malloc(sizeof(t_agent));
//         agents[i]->name = i % 2 ? mx_strdup("Smiths") : mx_strdup("notSmiths");
//         agents[i]->power = i * 3;
//         agents[i]->strength = i * 5;
//     }
    
//     t_agent **smiths = mx_only_smiths(agents, 500);
//     for (int i = 0; smiths[i]; ++i) {
//         printf("index    -> %d\n", i);
//         printf("name     -> %s\n", smiths[i]->name);
//         printf("power    -> %d\n", smiths[i]->power);
//         printf("strength -> %d\n\n", smiths[i]->strength);
//     }
    
//     for (int i = 0; agents[i]; ++i) {
//         free(agents[i]->name);
//         free(agents[i]);
//     }
//     free(agents);
//     for (int i = 0; smiths[i]; ++i) {
//         free(smiths[i]->name);
//         free(smiths[i]);
//     }
//     free(smiths);
// }

