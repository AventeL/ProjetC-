#ifndef PROJET_LOCALRESEARCHBESTAMELIORANTE_H
#define PROJET_LOCALRESEARCHBESTAMELIORANTE_H

#include "../LocalResearchVoisinage.h"

class LocalResearchBestAmeliorante : public LocalResearchVoisinage {
public:
    explicit LocalResearchBestAmeliorante(Voisinage &voisinage);

    Solution getAmeliorante(Solution &sol, Voisinage &voisinage, Eval &eval) override;
};


#endif
