#ifndef PROJET_RANDOM_H
#define PROJET_RANDOM_H


#include "../Solver.h"
#include "../../Eval/Eval.h"

class Random : public Solver {
public:
    void operator()(Solution &sol, Eval &eval) override;
};


#endif
