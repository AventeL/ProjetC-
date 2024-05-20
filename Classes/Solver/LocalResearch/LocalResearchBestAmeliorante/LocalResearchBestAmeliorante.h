#ifndef PROJET_LOCALRESEARCHBESTAMELIORANTE_H
#define PROJET_LOCALRESEARCHBESTAMELIORANTE_H


#include "../LocalResearchBase.h"

class LocalResearchBestAmeliorante : public LocalResearchBase {
public:
    explicit LocalResearchBestAmeliorante(Voisinage &voisinage);

    Solution getAmeliorante(Solution &sol, Voisinage &voisinage, Eval &eval) override;

protected:
    Voisinage &voisinage;
};

#endif
