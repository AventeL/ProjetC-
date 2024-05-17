#include "LocalResearchTabVoisinage.h"

LocalResearchTabVoisinage::LocalResearchTabVoisinage(std::vector<Voisinage> tabVoisinage)
        : tabVoisinage(std::move(tabVoisinage)) {}

void LocalResearchTabVoisinage::operator()(Solution &sol, Eval &eval) {
    sol = getAmeliorante(sol, std::move(tabVoisinage), eval);
}
