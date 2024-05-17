#ifndef PROJET_TWOOPT_H
#define PROJET_TWOOPT_H


#include "../../Solution/Solution.h"
#include "../Voisinage.h"

class TwoOpt : public Voisinage {
public:
    Solution doAction(Solution &sol, int index1, int index2) override;

    Solution doActionByIndex(Solution &sol, int index) override;

    int getNumberOfAction(Solution &sol) override;
};


#endif
