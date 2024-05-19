#ifndef PROJET_LOCALRESEARCHVOISINAGE_H
#define PROJET_LOCALRESEARCHVOISINAGE_H


#include "../../../Voisinage/Voisinage.h"
#include "../LocalResearchBase.h"

class LocalResearchVoisinage : public LocalResearchBase {
public:
    LocalResearchVoisinage(Voisinage &voisinage);

    virtual Solution getAmeliorante(Solution &sol, Voisinage &voisinage, Eval &eval) override = 0;

    void operator()(Solution &sol, Eval &eval) override;

protected:
    Voisinage &voisinage;
};


#endif
