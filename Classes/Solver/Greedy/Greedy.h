#ifndef PROJET_GREEDY_H
#define PROJET_GREEDY_H


#include "../Solver.h"
#include "../../Eval/Eval.h"

class Greedy : public Solver {
public:
    void operator()(Solution &sol, Eval &eval) override;
};


#endif
