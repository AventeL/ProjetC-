#include "Echange.h"
#include <cmath>

Solution Echange::doAction(Solution &sol, int index1, int index2) {
    Solution newSol = sol;
    newSol.swap(index1, index2);
    return newSol;
}

// formule pour le nombres d'échanges total : ((n-1)n)/2
Solution Echange::doActionByIndex(Solution &sol, int index) {
    Solution newSol = sol;
    int n = (int) (1 + sqrt(1 + 8 * index)) / 2;
    int index1 = index - (n * (n - 1)) / 2;
    int index2 = newSol.size() - n + index1;
    newSol = doAction(newSol, index1, index2);
    return newSol;
}

int Echange::getNumberOfAction(Solution &sol) {
    int n = sol.size();
    return ((n - 1) * n) / 2;
}
