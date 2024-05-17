#ifndef PROJET_LOCALRESEARCHTABVOISINAGE_H
#define PROJET_LOCALRESEARCHTABVOISINAGE_H


#include "../../../Voisinage/Voisinage.h"
#include "../LocalResearchBase.h"

class LocalResearchTabVoisinage : public LocalResearchBase {
public:
    LocalResearchTabVoisinage(std::vector<Voisinage> tabVoisinage);

    virtual Solution getAmeliorante(Solution &sol, std::vector<Voisinage> tabVoisinages, Eval &eval) = 0;

    void operator()(Solution &sol, Eval &eval) override;

protected:
    std::vector<Voisinage> tabVoisinage;
};

#endif
