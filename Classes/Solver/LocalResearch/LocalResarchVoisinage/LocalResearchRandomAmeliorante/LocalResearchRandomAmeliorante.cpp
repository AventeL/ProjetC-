#include "LocalResearchRandomAmeliorante.h"

LocalResearchRandomAmeliorante::LocalResearchRandomAmeliorante(Voisinage &voisinage) : LocalResearchVoisinage(
        voisinage) {}

Solution LocalResearchRandomAmeliorante::getAmeliorante(Solution &sol, Voisinage &voisinage, Eval &eval) {
    Solution meilleureSolution = sol;
    double distanceSol = eval(sol);
    double meilleureDistance = eval(sol);

    while (meilleureDistance >= distanceSol) {
        meilleureSolution.shuffle();
        meilleureDistance = eval(meilleureSolution);
        if (distanceSol < meilleureDistance) {
            return meilleureSolution;
        }
    }
    return meilleureSolution;
}
