#ifndef PROJET_SOLUTION_H
#define PROJET_SOLUTION_H

#include <vector>
#include "../Instance/Instance.h"

class Solution {
protected:
    std::vector<int> villes;
public:
    Solution(Instance instance);

    std::vector<int> getSolution() const;

    void setSolution(std::vector<int> solution);

    int operator[](int i) const;

    int size() const;

    void shuffle();

    void swap(int a, int b);

    void shift(int a, int b);

    void reverse(int a, int b);

    void disturb(int force);
};

std::ostream &operator<<(std::ostream &os, const Solution &sol);

#endif
