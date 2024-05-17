#ifndef PROJET_EVAL_H
#define PROJET_EVAL_H


#include "../Instance/Instance.h"
#include "../Solution/Solution.h"

class Eval {
public:
    Eval(Instance &_instance);

    Instance getInstance();

    static float distance(const Ville &a, const Ville &b);

    static float toRadiant(float val);

    float operator()(Solution &sol);

//TODO fonction calcule

protected:
    Instance &instance;
    constexpr static float pi = 3.141592;
    constexpr static float R = 6378.137;
};


#endif
