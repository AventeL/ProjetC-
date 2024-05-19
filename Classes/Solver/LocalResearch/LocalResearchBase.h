#ifndef PROJET_LOCALRESEARCHBASE_H
#define PROJET_LOCALRESEARCHBASE_H

#include "../Solver.h"
#include "../../Voisinage/Voisinage.h"


class LocalResearchBase : public Solver {
public:
    virtual void operator()(Solution &sol, Eval &eval) override = 0;

protected:
    virtual Solution getAmeliorante(Solution &sol, Voisinage &voisinage, Eval &eval) = 0;

    Solution algorithmeDescente(Solution &sol, Voisinage &voisinage, Eval &eval);
};

#endif
