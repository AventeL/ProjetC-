#ifndef PROJET_ECHANGE_H
#define PROJET_ECHANGE_H


#include "../Voisinage.h"

class Echange : public Voisinage {
public:
    Solution doAction(Solution &sol, int index1, int index2) override;

    Solution doActionByIndex(Solution &sol, int index) override;

    int getNumberOfAction(Solution &sol) override;
};

#endif
