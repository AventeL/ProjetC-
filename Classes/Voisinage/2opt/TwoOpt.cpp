#include "TwoOpt.h"
#include "../Echange/Echange.h"
#include <cmath>

Solution TwoOpt::doAction(Solution &sol, int index1, int index2) {
    Solution newSol = sol;
    newSol.reverse(index1, index2);
    return newSol;
}

Solution TwoOpt::doActionByIndex(Solution &sol, int index) {
    Solution newSol = sol;
    int n = (int) (1 + sqrt(1 + 8 * index)) / 2;
    int index1 = index - (n * (n - 1)) / 2;
    int index2 = newSol.size() - n + index1;
    newSol = doAction(newSol, index1, index2);
    return newSol;
}

int TwoOpt::getNumberOfAction(Solution &sol) {
    int n = sol.size();
    return ((n - 1) * n) / 2;
}

