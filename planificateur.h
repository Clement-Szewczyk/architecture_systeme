#ifndef PLANIFICATEUR_H
#define PLANIFICATEUR_H

void planifier_taches(const char *commande, int delai, int iterations, int diff2);

void executer_commande(const char *commande, int diff2);

void fork_planifier(const char *commande, int delai, int iterations, int diff);

#endif // PLANIFICATEUR_H