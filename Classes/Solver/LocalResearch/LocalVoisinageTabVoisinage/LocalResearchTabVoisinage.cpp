#include <iostream>
#include "LocalResearchTabVoisinage.h"
#include "../LocalResarchVoisinage/LocalResearchBestAmeliorante/LocalResearchBestAmeliorante.h"

LocalResearchTabVoisinage::LocalResearchTabVoisinage(const std::vector<Voisinage *> &tabVoisinage)
        : tabVoisinage(tabVoisinage) {}

void LocalResearchTabVoisinage::operator()(Solution &sol, Eval &eval) {
    sol = researchLocalVoisinage(sol, tabVoisinage, eval);
}

Solution LocalResearchTabVoisinage::getAmeliorante(Solution &sol, Voisinage &voisinage, Eval &eval) {
    LocalResearchBestAmeliorante test(voisinage);
    test(sol, eval);
    return sol;
}

