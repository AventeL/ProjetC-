#include <iostream>
#include "Classes/Instance/Instance.h"
#include "Classes/Solution/Solution.h"
#include "Classes/Eval/Eval.h"
#include "Classes/Solver/LocalResearch/LocalResarchVoisinage/LocalResearchBestAmeliorante/LocalResearchBestAmeliorante.h"
#include "Classes/Voisinage/Reinsertion/Reinsertion.h"
#include "Classes/Voisinage/Echange/Echange.h"
#include "Classes/Voisinage/2opt/TwoOpt.h"
#include "Classes/Solver/LocalResearch/LocalResarchVoisinage/LocalResearchFirstAmeliorante/LocalResearchFirstAmeliorante.h"
#include "Classes/Solver/LocalResearch/LocalResarchVoisinage/LocalResearchRandomAmeliorante/LocalResearchRandomAmeliorante.h"
#include "Classes/Solver/LocalResearch/LocalVoisinageTabVoisinage/LocalResearchTabVoisinage.h"
#include "Classes/Solver/LocalResearch/LocalVoisinageTabVoisinage/LocalResearchVoisinageVariable/LocalResearchVoisinageVariable.h"

int main() {
    Instance instanceTsp("../Instances/france_10.tsp");
    Solution solution(instanceTsp);

    std::cout << "Base : " << solution << std::endl;
    Eval eval(instanceTsp);
    std::cout << eval(solution) << std::endl;
    std::cout << "----------------" << std::endl;

    Reinsertion voisin;
    std::vector<Voisinage> tabVoisinage = {};
    tabVoisinage.push_back(voisin);
    LocalResearchVoisinageVariable localResearch(tabVoisinage);
    localResearch(solution, eval);
    std::cout << "Apres : " << eval(solution) << std::endl;
    std::cout << solution << std::endl;

    return 0;
}
/*Echange
 * 3258.1
6 9 0 5 8 3 7 1 4 2

 REINSERTION
 3258.14
6 2 4 1 7 3 8 5 0 9
 TWOOPT
 3258.14
9 6 2 4 1 7 3 8 5 0
*/