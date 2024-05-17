#ifndef PROJET_SOLVER_H
#define PROJET_SOLVER_H


#include "../Solution/Solution.h"
#include "../Eval/Eval.h"

class Solver {
public:
    virtual void operator()(Solution &sol, Eval &eval) = 0;
};

#endif
