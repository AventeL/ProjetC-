#ifndef PROJET_REINSERTION_H
#define PROJET_REINSERTION_H


#include "../Voisinage.h"

class Reinsertion : public Voisinage {
public:
    Solution doAction(Solution &sol, int index1, int index2) override;

    Solution doActionByIndex(Solution &sol, int index) override;

    int getNumberOfAction(Solution &sol) override;
};


#endif
