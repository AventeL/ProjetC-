#include "Greedy.h"

void Greedy::operator()(Solution &sol, Eval &eval) {
    for (int i = 0; i < sol.size() - 1; i++) {
        float min = RAND_MAX;
        int index = -1;
        for (int j = i + 1; j < sol.size(); j++) {
            float d = Eval::distance(eval.getInstance()[sol[i]], eval.getInstance()[sol[j]]);
            if (d < min) {
                min = d;
                index = j;
            }
        }
        sol.swap(index, i + 1);
    }
}