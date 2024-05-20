#include <iostream>
#include <limits>
#include "LocalResearchBase.h"
#include "LocalResarchVoisinage/LocalResearchVoisinage.h"

Solution LocalResearchBase::algorithmeDescente(Solution &sol, Voisinage &voisinage, Eval &eval) {
    Solution solution = sol;
    double distanceSolution = eval(sol);
    Solution meilleureSolution = sol;
    double meilleureDistance = std::numeric_limits<double>::max();
    while (meilleureDistance > distanceSolution) {
        meilleureSolution = solution;
        meilleureDistance = distanceSolution;
        solution = getAmeliorante(solution, voisinage, eval);
        distanceSolution = eval(solution);
    }
    return meilleureSolution;
}

