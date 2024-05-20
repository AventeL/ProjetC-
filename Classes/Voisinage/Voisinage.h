#ifndef PROJET_VOISINAGE_H
#define PROJET_VOISINAGE_H


#include <memory>
#include "../Solver/Solver.h"

class Voisinage {
public:

    virtual Solution doAction(Solution &sol, int a, int b) = 0;

    virtual Solution doActionByIndex(Solution &sol, int index) = 0;

    virtual int getNumberOfAction(Solution &sol) = 0;

    static Voisinage *getRandomVoisinage();
};

#endif
