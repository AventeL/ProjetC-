#include "Solution.h"
#include <iostream>
#include <random>
#include <algorithm>

Solution::Solution(Instance instance) {
    villes.resize(instance.getVilles().size());
    for (int i = 0; i < villes.size(); ++i) {
        villes[i] = i;
    }
}

std::vector<int> Solution::getSolution() const {
    return this->villes;
}

void Solution::setSolution(std::vector<int> solution) {
    this->villes = solution;
}

int Solution::operator[](int i) const {
    if (i < 0) {
        return villes[villes.size() + i];
    }
    return villes[i];
}

int Solution::size() const {
    return villes.size();
}

void Solution::shuffle() {
    std::random_device rd;
    std::mt19937 g(rd());
    g.seed(time(NULL));
    std::shuffle(villes.begin(), villes.end(), g);
}

void Solution::swap(int a, int b) {
    std::swap(this->villes[a], this->villes[b]);
}

void Solution::shift(int a, int b) {
    int temp = this->villes[a];
    if (a < b) {
        for (int i = a; i < b; i++) {
            this->villes[i] = this->villes[i + 1];
        }
    } else {
        for (int i = a; i > b; i--) {
            this->villes[i] = this->villes[i - 1];
        }
    }
    this->villes[b] = temp;
}

void Solution::reverse(int a, int b) {
    while (a < b) {
        swap(a, b);
        a++;
        b--;
    }
}


std::ostream &operator<<(std::ostream &os, const Solution &sol) {
    for (auto v: sol.getSolution()) {
        os << v << " ";
    }
    return os;
}