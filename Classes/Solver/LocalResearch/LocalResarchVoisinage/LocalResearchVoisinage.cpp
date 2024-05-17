#include "LocalResearchVoisinage.h"

LocalResearchVoisinage::LocalResearchVoisinage(Voisinage &voisinage) : voisinage(voisinage) {}

void LocalResearchVoisinage::operator()(Solution &sol, Eval &eval) {
    sol = algorithmeDescente(sol, voisinage, eval);
}
