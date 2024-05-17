#ifndef PROJET_LOCALRESEARCHVOISINAGEVARIABLE_H
#define PROJET_LOCALRESEARCHVOISINAGEVARIABLE_H


#include "../../LocalResearchBase.h"
#include "../LocalResearchTabVoisinage.h"
#include <vector>

class LocalResearchVoisinageVariable : public LocalResearchTabVoisinage {
public:
    explicit LocalResearchVoisinageVariable(std::vector<Voisinage> tabVoisinage);

    Solution getAmeliorante(Solution &sol, std::vector<Voisinage> tabVoisinages, Eval &eval) override;
};

#endif
