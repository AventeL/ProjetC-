#include "LocalResearchTabVoisinage.h"


LocalResearchTabVoisinage::LocalResearchTabVoisinage(const std::vector<Voisinage *> &tabVoisinage)
        : tabVoisinage(tabVoisinage) {}

void LocalResearchTabVoisinage::operator()(Solution &sol, Eval &eval) {
    //sol = getAmeliorante(sol, tabVoisinage, eval);
}

Solution LocalResearchTabVoisinage::getAmeliorante(Solution &sol, Voisinage &voisin, Eval &eval) {
    return algorithmeDescente(sol, voisin, eval);
}
