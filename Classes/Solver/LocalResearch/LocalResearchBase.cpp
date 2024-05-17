#include "LocalResearchBase.h"

Solution LocalResearchBase::algorithmeDescente(Solution &sol, Voisinage &voisinage, Eval &eval) {
    Solution solution = sol;
    double distanceSolution = eval(sol);
    Solution meilleureSolution = sol;
    double meilleureDistance = RAND_MAX;
    while (meilleureDistance > distanceSolution) {
        meilleureSolution = solution;
        meilleureDistance = distanceSolution;
        solution = getAmeliorante(solution, voisinage, eval);
        distanceSolution = eval(solution);
    }
    return meilleureSolution;
}