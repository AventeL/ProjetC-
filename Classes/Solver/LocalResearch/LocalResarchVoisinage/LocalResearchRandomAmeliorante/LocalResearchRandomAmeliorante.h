#ifndef PROJET_LOCALRESEARCHRANDOMAMELIORANTE_H
#define PROJET_LOCALRESEARCHRANDOMAMELIORANTE_H

#include "../LocalResearchVoisinage.h"

class LocalResearchRandomAmeliorante : public LocalResearchVoisinage {
public:
    explicit LocalResearchRandomAmeliorante(Voisinage &voisinage);

    Solution getAmeliorante(Solution &sol, Voisinage &voisinage, Eval &eval) override;
};

#endif