#ifndef PROJET_LOCALRESEARCHVOISINAGEVARIABLE_H
#define PROJET_LOCALRESEARCHVOISINAGEVARIABLE_H


#include "../LocalResearchBase.h"
#include <vector>

class LocalResearchVoisinageVariable : public LocalResearchTabVoisinage {
public:
    LocalResearchVoisinageVariable(std::vector<Voisinage *> &tabVoisinage);

    Solution researchLocalVoisinage(Solution &sol, std::vector<Voisinage *> &tabVoisinages, Eval &eval);

    Solution getAmeliorante(Solution &sol, Voisinage &voisinage, Eval &eval) override;


protected:
    std::vector<Voisinage *> tabVoisinage;
};

#endif
