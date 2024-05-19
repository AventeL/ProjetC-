#ifndef PROJET_LOCALRESEARCHTABVOISINAGE_H
#define PROJET_LOCALRESEARCHTABVOISINAGE_H


#include "../../../Voisinage/Voisinage.h"
#include "../LocalResearchBase.h"

class LocalResearchTabVoisinage : public LocalResearchBase {
public:
    LocalResearchTabVoisinage(const std::vector<Voisinage *> &tabVoisinage);

    virtual Solution getAmeliorante(Solution &sol, const std::vector<Voisinage *> &tabVoisinages, Eval &eval) = 0;

    Solution getAmeliorante(Solution &sol, Voisinage &voisin, Eval &eval) override;

    void operator()(Solution &sol, Eval &eval) override;

protected:
    std::vector<Voisinage *> tabVoisinage;
};

#endif
