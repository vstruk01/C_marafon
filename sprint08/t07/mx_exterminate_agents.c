#include "exterminate_agents.h"

void mx_exterminate_agents(t_agent ***agents) {
    if (!agents || !*agents)
        return;
        
    for (int i = 0; (*agents)[i]; ++i) {
        free((*agents)[i]->name);
        (*agents)[i]->name = NULL;
        free((*agents)[i]);
        (*agents)[i] = NULL;
    }
    free(*agents);
    *agents = NULL;
}

// int main(void) {
//     int count = 5;
    
//     t_agent **agents = malloc(sizeof(t_agent*) * (count + 1));
//     agents[count] = NULL;
    
//     for (int i = 0; i < count; ++i) {
//         agents[i] = malloc(sizeof(t_agent));
//         agents[i]->name = malloc(10);
//         agents[i]->power = i * 3;
//         agents[i]->strength = i * 5;
//     }
    
//     mx_exterminate_agents(&agents);
// }

