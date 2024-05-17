#include "Reinsertion.h"

Solution Reinsertion::doAction(Solution &sol, int index1, int index2) {
    Solution newSol = sol;
    newSol.shift(index1, index2);
    return newSol;
}

Solution Reinsertion::doActionByIndex(Solution &sol, int index) {
    Solution newSol = sol;
    int i, j;
    if (index <= newSol.size() - 2) {
        i = 0;
        j = index + 1;
    } else {
        i = (index - 1) / (newSol.size() - 2);
        j = (index - 1) % (newSol.size() - 2);
        if (j >= i - 1) {
            j += 2;
        }
    }
    newSol = doAction(newSol, i, j);
    return newSol;
}

int Reinsertion::getNumberOfAction(Solution &sol) {
    int n = sol.size();
    return (n - 1) * (n - 1);
}


