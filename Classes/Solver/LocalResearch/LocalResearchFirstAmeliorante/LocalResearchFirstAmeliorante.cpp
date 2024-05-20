#include "LocalResearchFirstAmeliorante.h"

Solution LocalResearchFirstAmeliorante::getAmeliorante(Solution &sol, Voisinage &voisinage, Eval &eval) {
    Solution meilleureSolution = sol;
    double meilleureDistance = eval(sol);
    for (int i = 0; i < voisinage.getNumberOfAction(sol); i++) {
        Solution solutionVoisine = voisinage.doActionByIndex(sol, i);
        double distanceVoisine = eval(solutionVoisine);
        if (distanceVoisine < meilleureDistance) {
            meilleureSolution = solutionVoisine;
            return meilleureSolution;
        }
    }
    return meilleureSolution;
}

LocalResearchFirstAmeliorante::LocalResearchFirstAmeliorante(Voisinage &voisinage) : voisinage(voisinage) {}