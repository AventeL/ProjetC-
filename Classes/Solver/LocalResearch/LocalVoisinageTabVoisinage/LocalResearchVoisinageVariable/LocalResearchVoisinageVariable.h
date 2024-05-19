#ifndef PROJET_LOCALRESEARCHVOISINAGEVARIABLE_H
#define PROJET_LOCALRESEARCHVOISINAGEVARIABLE_H


#include "../../LocalResearchBase.h"
#include "../LocalResearchTabVoisinage.h"
#include <vector>

class LocalResearchVoisinageVariable : public LocalResearchTabVoisinage {
public:
    LocalResearchVoisinageVariable(const std::vector<Voisinage *> &tabVoisinages);

    Solution getAmeliorante(Solution &sol, const std::vector<Voisinage *> &tabVoisinages, Eval &eval) override;
};

#endif
