#ifndef PROJET_LOCALRESEARCHTABVOISINAGE_H
#define PROJET_LOCALRESEARCHTABVOISINAGE_H


#include "../../../Voisinage/Voisinage.h"
#include "../LocalResearchBase.h"

class LocalResearchTabVoisinage : public LocalResearchBase {
public:
    LocalResearchTabVoisinage(const std::vector<Voisinage *> &tabVoisinage);

    Solution getAmeliorante(Solution &sol, Voisinage &voisinage, Eval &eval) override;

    virtual Solution researchLocalVoisinage(Solution &sol, std::vector<Voisinage *> &tabVoisinages, Eval &eval) = 0;

    void operator()(Solution &sol, Eval &eval)  override;

protected:
    std::vector<Voisinage *> tabVoisinage;
};

#endif
