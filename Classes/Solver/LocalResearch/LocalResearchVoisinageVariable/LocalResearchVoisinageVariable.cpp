#include <iostream>
#include "LocalResearchVoisinageVariable.h"
#include "../../../Voisinage/2opt/TwoOpt.h"
#include "../LocalResearchBestAmeliorante/LocalResearchBestAmeliorante.h"

Solution LocalResearchVoisinageVariable::researchLocalVoisinage(Solution &sol, std::vector<Voisinage *> &tabVoisinages,
                                                                Eval &eval) {
    Solution meilleure_solution = sol;
    double meilleure_distance = eval(sol);
    for (auto &tabVoisinage: tabVoisinages) {
        Solution solution = algorithmeDescente(sol, *tabVoisinage, eval);
        double distance_solution = eval(solution);
        if (distance_solution < meilleure_distance) {
            meilleure_solution = solution;
            meilleure_distance = distance_solution;
        }
    }
    return meilleure_solution;
}

LocalResearchVoisinageVariable::LocalResearchVoisinageVariable(std::vector<Voisinage *> &tabVoisinage)
        : tabVoisinage(tabVoisinage) {}

void LocalResearchVoisinageVariable::operator()(Solution &sol, Eval &eval) {
    sol = researchLocalVoisinage(sol, tabVoisinage, eval);
}

Solution LocalResearchVoisinageVariable::getAmeliorante(Solution &sol, Voisinage &voisinage, Eval &eval) {
    LocalResearchBestAmeliorante test(voisinage);
    test(sol, eval);
    return sol;
}
