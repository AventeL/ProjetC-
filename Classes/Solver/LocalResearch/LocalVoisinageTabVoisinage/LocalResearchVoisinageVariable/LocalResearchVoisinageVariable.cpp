#include "LocalResearchVoisinageVariable.h"

Solution
LocalResearchVoisinageVariable::getAmeliorante(Solution &sol, std::vector<Voisinage> tabVoisinages, Eval &eval) {
    Solution meilleure_solution = sol;
    double meilleure_distance = eval(sol);
    for (auto &tabVoisinage: tabVoisinages) {
        Solution solution = algorithmeDescente(sol, tabVoisinage, eval);
        double distance_solution = eval(solution);
        if (distance_solution < meilleure_distance) {
            meilleure_solution = solution;
            meilleure_distance = distance_solution;
        }
    }
    return meilleure_solution;
}

LocalResearchVoisinageVariable::LocalResearchVoisinageVariable(std::vector<Voisinage> tabVoisinage)
        : LocalResearchTabVoisinage(std::move(tabVoisinage)) {}

